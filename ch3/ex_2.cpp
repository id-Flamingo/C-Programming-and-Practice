#include <iostream>
#include "../std_lib_facilities.h"

using namespace std;

int main(){
    cout << "Please Enter your first name and age\n";
    string first_name;
    int age;

    cin >> first_name; // Try entering an integer
    cin >> age; // Try entering a string

    cout << "Hello, " << first_name << " (age: " << age << ")";
}