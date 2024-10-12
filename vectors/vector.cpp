#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> one = {1,2,3};
    cout << one.at(2)<<endl;
    cout << one.front() << endl;
    one.push_back(7);
    cout << one.capacity() << endl;
    cout << one.size() << endl;

    //shrink_to_fit() shrinks the capacity of vector when the memory is not used 
    return 0;
}