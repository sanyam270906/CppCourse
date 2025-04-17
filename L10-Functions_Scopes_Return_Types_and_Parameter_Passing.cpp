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
//POSITIVE NUMBER CHECK
bool isPositive(int c){
    if(c>0){
        return true;
    } else{
        return false;
    }
}
//PRINT STAR ROW
void printStarRow(int s){
    for (int i = 1; i <= s; i ++){
        cout<<" * ";
    }
}
//PARAMETER PASSING
void change(int x){ //Passing by value: changes inside the function dont affect the original.
    x = 100;
} 
void swap(int &a, int &b){
    a = 50; b = 60; //Passing by reference: using '&' passes the actual variable, changes inside the function are reflected outside.
}
int main(){
    int y = 50;
    change(y); //changes in the function are not reflected.
    cout<<y<<endl;
    
    int n = 30; int m = 200;
    swap(n, m); //changes in the function are reflected.
    cout<<n<<" "<<m<<endl;
    
    int num;
    cout<<"Type a number to check if it's positive!\n";
    cin>>num;
    if(isPositive(num)){
        cout<<num<<" is positive!\n";
    }else{
        cout<<num<<" is not positive!\n";
    }

    int star;
    cout<<"Type a number to make a star row!\n";
    cin>>star;
    printStarRow(star);
    return 0;
}