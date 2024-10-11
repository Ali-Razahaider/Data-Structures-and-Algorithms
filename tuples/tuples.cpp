#include<iostream>
#include<tuple>

using namespace std;

int main(){
    tuple<int, string> car(2004,"BMW M5 CS with twin turbo V8");


    tuple<string> intro;
    intro = make_tuple("Introducing the new ");
    cout << get<0>(intro) << get<1>(car) << endl;

    auto sentence = tuple_cat(intro, car);
    cout  << get<0>(intro) << get<1>(car) << endl;
}