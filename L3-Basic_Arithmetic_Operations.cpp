#include <iostream>
using namespace std;

/*      Arithmetic Operators
   +    add                 15+3=17
   -    subtract            15-3=12
   *    multiply            15*3=45
   /    divide              15/3=5
   %    modulus(remainder)  17%3=2
*/
int main(){
int num1=2; int num2=4; int num3=7;
cout<<"Addition "<<num1+num2<<endl;
cout<<"Subtraction "<<num2-num1<<endl;
cout<<"Multiplication "<<num1*num2<<endl;
cout<<"Division "<<num2/num1<<endl;
cout<<"Modulus "<<num3%num1<<endl;
cout<<"Division2 "<<num3/num2<<endl; //7/4=1 because its an integer division, to get a decimal answer sue float or double variable.
cout<<" "<<endl;

float num4=4.3; float num5=12.9;
cout<<"Addition "<<num4+num5<<endl;
cout<<"Subtraction "<<num5-num4<<endl;
cout<<"Multiplication "<<num4*num5<<endl;
cout<<"Division "<<num5/num4<<endl;
cout<<" "<<endl;

float numA; float numB; 
cout<<"Enter first number"<<endl;
cin>>numA;                        //taking user input
cout<<"Enter second number"<<endl;
cin>>numB;
cout<<"sum "<<numA+numB<<endl;
cout<<"difference "<<numA-numB<<endl;
cout<<"product "<<numA*numB<<endl;
cout<<"quotient "<<numA/numB<<endl;

    return 0;
}