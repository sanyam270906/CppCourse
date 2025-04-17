#include <iostream>
using namespace std;
//Loops let you repeat a block of code as long as a condition is true.
int main(){                      
    for (int i = 1; i<=5; i++){ //We declare i and set it to 1 and run a loop until it hits 5. i ++ increases the value by 1 each time.
        cout<<"Hello, this is line "<<i<<endl;
    }
    int j = 1;
    while (j <= 5){ //'while' works the same as 'for' except the declaration and condition are seperated.
        cout<<"j is: "<<j<<endl;
        j++;
    }
    int k = 6; 
    do{ //With this, the loop runs atleast once even if the condition is false.
        cout<<"Value of k: "<<k<<endl;
        k++;
    } while (k <= 5);

    //NUMBERS FROM 1 TO 50
    for(int num = 1; num <= 50; num++){
        if(num % 2 == 0){
            cout<<num<<" is even!\n";
        }else {
            cout<<num<<" is odd\n";
        }
    }
    //MULTIPLICATION TABLE OF 11
        for(int table = 1; table <= 10; table ++){
            cout<<"11 x "<<table<<" = "<<table*11<<endl;
        }
    //SUM OF FIRST n NUMBERS

    /* Compund assignment operators
    +=  add and assign      x+=5 -> x+5
    -=  subtract and assign x-=5 -> x-5
    *=  multiply and assign x*=5 -> x*5
    /=  divide and assign   x/=5 -> x/5
    %=  modulus and assign  x%=5 -> x%5
    */
   int n; int sum = 0;
   cout<<"Give me a natural number!\n";
   cin>>n;
        for(int natural = 1; natural <= n; natural ++){
            sum += natural; //keeps adding the values (1+2+3+4+5+...)
            if(natural != n){
                cout<<natural<<" + ";
            }else {
                cout<<natural<<" = "<<sum<<endl;
            }
    }
    //FACTORIAL OF A NUMBER
    //Printing only the final result.
    long long N; long long factorial = 1;                     //well, 'int' cannot store very large numbers and factorial can get pretty large, 
    cout<<"What's the number you want the factorial for?\n"; //'long long' can do that although it also has a limit.
    cin>>N;
    for(long long NUM=1; NUM<=N; NUM++){
        factorial*=NUM;
        
    }cout<<N<<"! = "<<factorial<<endl;//Print outside the loop if you just want the result without the steps.
    
    //Printing steps along with the final result.
    long long number; long long fact = 1;
    cout<<"What's another number you want the factorial for?\n";
    cin>>number;
    cout<<number<<"! = ";
    for(long long NO=1; NO<=number; NO++){
        fact*=NO;
        if (NO!=number){
            cout<<NO<<" * ";
        }else{
            cout<<NO<<" = "<<fact<<endl;
        }
    }

    

    

   





















    return 0;
}
