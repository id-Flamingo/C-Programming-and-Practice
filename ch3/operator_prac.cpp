#include <iostream>
#include "../std_lib_facilities.h"

using namespace std;

int main(){
    cout << "Please enter a integer value: ";
    int n;
    cin >> n;
    cout << "n = " << n
    << "\nn+1 = " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n = " << n+n
    << "\nn squared = " << n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << sqrt(n)
    << endl; //nother name for newline ("end of line")
}