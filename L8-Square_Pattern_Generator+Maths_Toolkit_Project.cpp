#include <iostream>
using namespace std;
int main(){
    cout<<"Welcome to the Pattern and Maths Toolkit!\n";
     
    for (;;){
        int option; //variables declared inside loops/statements are exclusive to that block and do not exist outside it.
        cout<<"Choose an Option:\n";
        cout<<"1. Square Pattern\n";
        cout<<"2. Check if a number is prime\n";
        cout<<"3. Multiplication Table of a Number\n";
        cout<<"4. Exit\n";
        cout<<endl;
        cin>>option;
        cout<<endl;
        //SQUARE PATTERN
        if(option == 1){
            for(int i = 1; i <= 5; i ++){ 
                for(int j = 1; j <= 5; j ++){
                    cout<<" * ";
                }
                cout<<endl;
            }cout<<endl;
        } 
        
        //PRIME NUMBER 
        else if(option == 2){
            int n; bool isPrime = true;
            cout<<"Type a number!\n";
            cin>>n;
            if(n <= 1){
                isPrime = false;
            }else {
                for (int k = 2; k < n; k++){ //if any natural number starting from 2 divides 'n', then it won't be prime.
                    if (n % k == 0) {
                        isPrime = false;
                    break;
                    }else { isPrime = true; }
                }
            }
            if (isPrime){
                cout<<n<<" is a prime number!\n";
            cout<<endl;
        }   else{
            cout<<n<<" is not a prime number!\n";
            cout<<endl;
        }
            
        }
        //MULTIPLICATION TABLE
        else if(option == 3){
            int m; 
            cout<<"Type a number!\n";
            cin>>m;
            for (int l = 1; l <= 10; l++){
                cout<<m<<" x "<<l<<" = "<<m*l<<endl;
            }
            cout<<endl;        
        } 
        // EXIt
        else if(option == 4){
            cout<<"You have exited!\n";
            break;
        }
        else{ 
            cout<<"please enter a valid option!\n";
            cout<<endl;
            continue;
        }
    }
    return 0;
}