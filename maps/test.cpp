#include <iostream>
#include<map>
using namespace std;

int main() {
    string str = "Hello my name is XYZ";
    map<char, int> freq;

    for (int i = 0; i < str.length();i++){
        char letter = str[i];
        cout << letter;
        if(freq.find(letter) == freq.end() ){
            freq[letter] = 0;
        }
        freq[letter]++;
    }

    for (auto itr = freq.begin(); itr != freq.end();itr++){
        cout << itr->first << ":" << itr->second << endl;
    }

        return 0;
}