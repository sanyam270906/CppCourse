#include <iostream>
using namespace std;
//Scope is where a variable is visible or accessible.

void sayHi(){
    int age = 18; //Local Variable: declared inside a function or block, only accesible here.
    cout<<age; 
}

int score = 100;    //Global Variable: declared outside all functions or blocks, accesible everywhere. (avoid using unless absolutely neccessary)
void showScore(){
    cout<<score;
}

void change(int x){
    x = 100;
} 
void swap(int &a, int &b){
    a = 50; b = 60;
}
int main(){
    int y = 50;
    change(y);
    cout<<y<<endl;
    
    int n = 30; int m = 200;
    swap(n, m);
    cout<<n<<" "<<m<<endl;


    return 0;
}