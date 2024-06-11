#include <iostream>
#include "../std_lib_facilities.h"

using namespace std;

int main(){ 
    // string previous = " ";
    // string current;
    // while (cin>>current){
    //     if(previous == current)
    //         cout << "repeated word: " << current << '\n';
    //     previous = current; 
    // }

    double d = 0;
    while (cin>>d){

        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d
             << " i==" << i
             << " i2==" << i2 
             << " char(" <<c<<")\n";
    }
}