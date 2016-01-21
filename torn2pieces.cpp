//
// Created by Jonathan Knorn on 16-01-19.
//

#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <vector>

using namespace std;

map<string,int> dist;
map<string,string> previous;
map<string, set<string>> graph;
set<string> q;

void add_edge(string a, string b){
    graph[a].insert(b);
    graph[b].insert(a);
}


void dijkstra(string start, string dest){
    for(auto it = graph.begin(); it != graph.end(); ++it){
        string station = (*it).first;
        dist[station] = -1;
        q.insert(station);
    }
    dist[dest] = 1;
    bool dead = false;
    bool found = false;
    while(q.size() > 0 && !found){
        string next_node = "";
        int smallest_dist = -1;
        for(auto it = q.begin(); it != q.end(); ++it){
            int distance = dist[*it];
            if(distance != -1 && (smallest_dist == -1 || distance < smallest_dist )){
                smallest_dist = distance;
                next_node = *it;
            }
        }
        if(next_node.compare("") == 0){ //All nodes connected to the destination-node traversed
            dead = true;
            break;
        }
        q.erase(next_node);
        set<string> neighbours = graph[next_node];
        for(auto it = neighbours.begin(); it != neighbours.end(); ++it){
            string neigbour = *it;
            int alt = dist[next_node] + 1;
            if(dist[neigbour] == -1 || alt < dist[neigbour]){
                dist[neigbour] = alt;
                previous[neigbour] = next_node;
            }
            if(neigbour.compare(start) == 0){   //Route from destination to start found
                found = true;
                break;
            }
        }
    }
    if(found) {
        string node = start;
        while (node.compare(dest) != 0) {
            cout << node << " ";
            node = previous[node];
        }
        cout << node << endl;
    } else {
        cout << "no route found" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    string line;
    getline(cin, line);; //flush
    for(int i = 0; i < n; ++i){
        getline(cin, line);
        stringstream s(line);
        string a, b;
        s >> a;
        while(s >> b){
            add_edge(a,b);
        }
    }
    string start, dest;
    cin >> start >> dest;
    dijkstra(start, dest);
    return 0;
}