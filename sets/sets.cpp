// Set is a data structure that tells us if an element is present or not
// ordered collection of unique elements


#include<iostream>
#include<set>
using namespace std;

int main(){
    set<char> s1 = {'c', 'd','c'};
    s1.insert('v');
    s1.erase('c');
    if(s1.find('c')==s1.end()){
        cout << "could not find c\n";
    }else{
        cout << "Found c\n";
    }

    for (auto itr = s1.begin(); itr != s1.end();itr++){
        cout << *itr << endl;
    }

}