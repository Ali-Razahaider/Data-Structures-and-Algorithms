#include<iostream>
#include<set>

using namespace std;

int main(){
    // find the search string in the test string;
    string test = "This is r a teset sa dsa ds ad sa";
    string search = "reset";
    set<char> findletters;
    for (int i = 0; i < search.length(); i++){
        char letter = search[i];
        findletters.insert(letter);
    }

    for (int i = 0; i < test.length();i++){
        char letter = test[i];
        findletters.erase(letter);
    }

    if(findletters.size()>0){
        cout << "All letters were not found" << endl;
    }else
        cout << "All letters found" << endl;
}