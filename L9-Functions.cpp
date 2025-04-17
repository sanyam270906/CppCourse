#include <iostream>
using namespace std;

//Function is a reusable block of code. Instead of repeating code, you call a function.]
/*  TYPES OF FUNCTIONS
    void    Does something but returns nothing.
    int     returns an integer result.
    bool    return true or false.
    string  returns a text.
*/
//SUM
int add(int a, int b){  //Function named add returns an int. (int a, int b) takes two inputs.
    return (a + b);     //sends back the result to where it's called.
}

//EVEN OR ODD
bool isEven(int c){
    return c %2 == 0;
}

//MULTIPLICATION TABLE
void table(int m){     //Void means the function does not return anything. it prints the table inside the loop.
    for(int i = 1; i <= 10; i ++){
    cout<<m<<" x "<<i<<" = "<<m*i<<endl;
    }
}

//PRIME
bool isPrime(int p){
    if(p <= 1){
        return false; //do not write stuff like (!isPrime) this is a function not a variable!
    }else{
        for(int j = 2; j < p; j ++){
            if(p % j == 0){
                return false;
                break;
            }
        }
        return true; //make sure to give a default return incase the loop doesnt run at all!
    }
}

int main(){
 
int sum = add(3,5);     //calls the function with 3 and 5;
    cout<<"Sum is "<<sum<<endl;

int num;
    cout<<"Type a number!\n";
    cin>>num;
    if(isEven(num)){
        cout<<num<<" is Even!\n";
    }else{
        cout<<num<<" is Odd!\n";
    }

int multi;
cout<<"Type a number!\n";
cin>>multi;
table(multi);

int prime;
cout<<"Type a number!\n";
cin>>prime;
if(isPrime(prime)){
    cout<<prime<<" is Prime!\n";
}else{ 
    cout<<prime<<" is not Prime!\n";
}
    return 0;
}