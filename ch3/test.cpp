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

    // double d = 0;
    // while (cin>>d){

    //     int i = d;
    //     char c = i;
    //     int i2 = c;
    //     cout << "d==" << d
    //          << " i==" << i
    //          << " i2==" << i2 
    //          << " char(" <<c<<")\n";
    // }

    string first_name = "";
    string friend_name = "";
    char friend_sex = 0;
    int age = 0;
    // cout << "Please enter your first name: ";
    // cin >> first_name;
    // cout << "This is a form letter by " << first_name;
    cout << "Please enter the name of the person you want to write to. ";
    cin >> first_name;
    cout << "Now please enter the name of a friend of yours. ";
    cin >> friend_name;
    cout << "Is this friend male or female? (m or f) ";
    cin >> friend_sex;
    cout << "Now enter the age of your friend. ";
    cin >> age;
    
    cout << "Dear " << first_name << ",\n"
         << "     How are you? I am fine. I miss you.\n"
         << "Sometimes I think about cats. Actually, I think about cats a lot. They are so fluffy. I love them.\n"
         << "Have you seen " << friend_name << " recently?";
         if (friend_sex == 'f'){
            cout << " If you see " << friend_name << " will you ask her to call me?";
         }
         if (friend_sex == 'm'){
            cout << "If you see " << friend_name << " will you ask him to call me?";
         }
          if (age != 0 && age < 110){
            cout << " I hear you just had a birthday and you are " << age << " years old.";
         }
         else {
            cout << " You're kidding. \n";
         }
         if (age < 12){
            cout << " Next year you will be " << age+1 << ".";
         }
         if (age == 17){
            cout << " Next year you will be able to vote.";
         }
         if (age > 70){
            cout << " I hope you are enjoying retirement.";
         }
         cout << " Yours sincerely, \n\n" << "Ian.";
}