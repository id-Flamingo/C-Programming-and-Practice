#include <iostream>
#include "../std_lib_facilities.h"
using namespace std;

int main(){
    cout << "Please enter your first name (Followed by 'enter'):\n";

    string first_name;
    cin >> first_name;

    cout << "Hello, " << first_name << "\n";

    keep_window_open();

}
 