#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string sentence;        //A better way to input strings.
    getline(cin, sentence); //Stores the whole sentence in the string instead of just one word.
    cout<<"You entered "<<sentence<<endl;

//Strings are like an array of characters.
    string s = "Hello";
    cout<<s[0]<<endl; //H
    cout<<s[4]<<endl; //o

//COMMON STRING FUNCTIONS
    cout<<s.length(); //or s.size(). Returns the number of characters in a string.

//FULL NAME READER
    string fullname;
    cout<<"Please type your full name!\n";
    getline(cin, fullname);
    cout<<"Your full name is "<<fullname<<"!\n";
    cout<<"Your name has "<<fullname.length()<<" characters!\n";
    cout<<"The first letter of your name is "<<fullname[0]<<endl;
    cout<<"The last letter of your name is "<<fullname[fullname.length()-1]<<endl;

    return 0;
}