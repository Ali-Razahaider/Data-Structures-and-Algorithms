#include<iostream>
#include<map>
using namespace std;

int main(){
    map<char, int> new_map;
    new_map = {
        {'A', 2},
        {'B', 3},
        {'C', 4}};
    new_map['u'] = 0;
    pair<char, int> p1('j', 7); //create a pair of key & value
    new_map.insert(p1);
    new_map.erase('j');
    cout << new_map['j'] << endl; // returns 0 because it doesnt exist

    cout << new_map.size();
    // new_map.clear();
     //clear everything
    // cout << new_map.empty();

    cout << "\nInside the loop" << endl; 
    // iterating through map
    for (auto itr = new_map.begin(); itr != new_map.end(); itr++){
        cout << (*itr).first << endl; 
        // deferencing is required as the itr is an interator type pointer
        // cout << itr->first << endl;
        // Shorthand to deference the iterator;
    }
}