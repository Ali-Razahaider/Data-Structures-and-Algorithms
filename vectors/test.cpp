#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1 = {2, 3, 4};
    v1.insert(v1.begin(),1);
    v1.insert(v1.begin()+1,33);
    cout << v1[0]<<endl;
    v1.assign(5, 7);
    v1.erase(v1.begin());

    cout << v1[2]<<endl;
    for(auto i : v1){
        cout << i << endl;
    }
}