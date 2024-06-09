#include <iostream>
#include "../std_lib_facilities.h"

using namespace std;

int main(){ 
    string previous = " ";
    string current;
    while (cin>>current){
        if(previous == current)
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}