//
// Created by Jonathan Knorn on 16-02-14.
//

#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <set>
#include <vector>

using namespace std;

typedef pair<int, int> Coordinate;

int main(){
    int t;
    cin >> t;
    while(t--){
        map<Coordinate, list<Coordinate>> m;
        vector<Coordinate> v;
        int n;
        cin >> n;
        ++n;
        int x,y;
        cin >> x >> y;
        Coordinate start = make_pair(x,y);
        list<Coordinate> start_list;
        m[start] = start_list;
        v.push_back(start);
        while(n--){
            cin >> x >> y;
            Coordinate position = make_pair(x,y);
            for(auto it = v.begin(); it != v.end(); ++it){
                Coordinate neighbour = *it;
                if(abs(neighbour.first-x) + abs(neighbour.second-y) <= 1000){
                    m[neighbour].push_back(position);
                    m[position].push_back(neighbour);
                }
            }
            v.push_back(position);
        }
        Coordinate end = make_pair(x,y);
        queue<Coordinate> to_visit;
        to_visit.push(start);
        set<Coordinate> visited;
        bool found = false;
        while(!to_visit.empty()){
            Coordinate current = to_visit.front();
            to_visit.pop();
            if(current == end){
                found = true;
                break;
            }
            if(visited.find(current) == visited.end()){
                visited.insert(current);
                auto current_list = m[current];
                for(auto it = current_list.begin(); it!= current_list.end(); ++it){
                    to_visit.push(*it);
                }
            }
        }
        if(found){
            cout << "happy" << endl;
        } else {
            cout << "sad" << endl;
        }
    }
}