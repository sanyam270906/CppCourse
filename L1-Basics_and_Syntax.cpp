#include <iostream>
#include <string> //neccessary for string variable to work properly

using namespace std;
int main()
{
    string name; //declaring variables 
    int age;

   cout<<"Hey, what's your name?"<<endl; //endl starts a new line in the output.

   cin>>name; //Like cout gives an output, cin takes user's input.

   cout<<"And how old are you "<<name<<"?\n"; //\n is another way to start a new line in output, it is more useful.

   cin>>age; 

   cout<<"Hello "<<name<<". You're "<<age<<" years old!";
    
    //This way we can use variables to get inputs and store them.
    
    return 0;
}