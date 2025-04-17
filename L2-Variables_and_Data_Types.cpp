#include <iostream> //Variables are like boxes where we can store data (integers, decimals, characters, words). Every variable has a name, type and value.
using namespace std;
/*Data Types in C++
  int    (stores whole numbers)        int day = 1;
  float  (stores decimals)             float height = 5.9;
  double (stores higher decimals)      double pi = 3.14159;
  char   (stores a single character)   char initial = 'S';
  string (stores words, sentences)     string name = "Sanyam";
  bool   (stores true or false) bool   isHappy = true;
*/
int main(){
int age = 18; //declaring a variable.
float height = 5.9;
char initial = 'S';
string name = "Sanyam";
bool ishappy = true;

cout<<"My name is "<<name<<endl;
cout<<"I am "<<age<<" years old."<<endl;
cout<<"My height is "<<height<<endl;
cout<<"I am happy "<<ishappy; //1 in output means true and 0 means false.

//We could also take user input instead of giving a value to our variables. 
    return 0;
}
