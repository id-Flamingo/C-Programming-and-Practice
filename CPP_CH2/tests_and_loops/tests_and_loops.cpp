#include <iostream>
#include "../../std_lib_facilities.h"

int main(){
    bool accept();
    {
        cout << "Proceed? (y or n)";

        char answer = 0;
        cin >> answer;

        if (answer == 'y') return true;
        return false;
    }

    bool();
}