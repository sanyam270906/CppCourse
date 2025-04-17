#include <iostream>
using namespace std;

bool isPrime(int a){
    if(a <= 1){
        return false;
    } else{
        for (int i = 2; i*i <= a; i ++){ //faster and easier than i<a
            if(a % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
for (;;){
    int option;
    cout<<"   CHOOSE AN OPTION!\n";
    cout<<"1. Check if a number is prime.\n";
    cout<<"2. Print all prime numbers from 1 to N.\n";
    cout<<"3. Count prime numbers from 1 to N.\n";
    cout<<"4. Find the Nth prime number.\n";
    cout<<"5. Exit.\n";
    cout<<"--------------------------------------\n";
    cin>>option;
    cout<<endl;
    if(option == 1){
        int p; 
        cout<<"Type a number!\n";
        cin>>p;
        if(isPrime(p)){
            cout<<p<<" is a prime number!\n";
        } else{ 
            cout<<p<<" is not a prime number!\n";
        }
        cout<<endl;
    } 
    else if(option == 2){
        int n; 
        cout<<"Type a number!\n";
        cin>>n;
        for(int i = 1; i <= n; i ++){
            if(isPrime(i)){
                cout<<i<<" ";
            }
        } 
        cout<<endl;
        cout<<endl;
    }
    else if(option == 3){
        int n; int count = 0; 
        cout<<"Type a number!\n";
        cin>>n;
        for(int i = 1; i <= n; i ++){
            if(isPrime(i)){
            count ++;       //Every time a number is prime the count increases by 1.
            }
        } 
        cout<<"Total number of prime numbers between 1 to "<<n<<" is "<<count<<endl; 
        cout<<endl;
    }
    else if(option == 4){
        int m; int counter = 0;
        cout<<"Type a number!\n";
        cin>>m;
        for(int k = 1; k > 0; k++){
            if(isPrime(k)){
            counter ++;         //So just like option 3, count everytime a prime number comes but if the input number matches the count number, 
            if(counter == m){   //print the prime number at that mark.
        cout<<"The "<<m<<"th prime number is "<<k<<endl;
        break;   //this is an infinite loop (k = 1; k > 0; k ++)so we have to break it manually!
    }}
    } cout<<endl; 
} 
    else if(option == 5){
    cout<<"You have exited!\n";
    break;
} 
    else{
        cout<<"Please choose a valid option!\n";
        cout<<endl;
    }
}
    return 0;
}
