#include <iostream>
using namespace std; 
/*Conditional Statements(if, else if, else) allow your program to make decisions.

   if (condition) {
   code runs if it's true.
 } else if (condition){
   code runs if second condition is true.
 } else {
  code runs if none of the above are true. 
}
*/
int main(){
    //CHECKING IF A NUMBER IS POSITIVE OR NEGATIVE.
   int number;
   cout<<"type a number to check if it's positive or negative!\n";
   cin>>number;

    if (number>0){
    cout<<"number is positive!\n";
} 
    else if (number<0){
    cout<<"number is negative!\n";
} 
    else{
    cout<<"number is neither positive nor negative\n";
}
    //CHECKING IF A PERSON IS ELIGIBE TO VOTE.
    int age;
    cout<<"What is your age?\n";
    cin>>age;
    if (age>=18){
        cout<<"You are eligible to vote!\n";
    } 
    else {
        cout<<"You are not eligible to vote.\n";
    }
/*  Common Comparison Operators
    ==      Equal to                    x == 5
    !=      Not equal to                y != 7
    >       Greater than                z > 3
    <       Less than                   a < 1
    >=      Greater than or equal to    b >= 4
    <=      Less than or equal to       c <= 8
*/
    //CHECKING IF A NUMBER IS EVEN OR ODD.
    int num;
    cout<<"Type a number to check if it's even or odd!\n";
    cin>>num;
    if (num%2 == 0){
        cout<<"Number is even!\n";
    } else {
        cout<<"Number is odd!\n";
    }

    return 0;
}