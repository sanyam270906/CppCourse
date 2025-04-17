#include <iostream>
using namespace std;
int main(){
   
    int PIN; int option; int withdraw = 0; int deposit = 0; int balance = 1000;
   do{
    cout<<"Welcome to the ATM\n";
    cout<<"Please Enter your PIN\n";
    cout<<"\n";
    cin>>PIN;
    cout<<"\n";
   } while (PIN<1000 || PIN>9999);   //'||' is acts as OR just like && acts as AND.
    cout<<endl;                      //This loop will keep running until a value >=1000 and <= 9999 is entered.
    cout<<"PIN is accepted!\n";
    cout<<endl;

    bool exitATM = false;
    while(!exitATM){ // ';;' forms a loop without a condition.
        cout<<"Type 1 to check balance\n";
        cout<<"Type 2 to withdraw cash\n";
        cout<<"Type 3 to deposit cash\n";
        cout<<"Type 4 to exit\n";
        cout<<"\n";
        cin>>option;
        cout<<"\n";

        switch(option){ //instead of using multiple if, else if statements use switch for efficiency.
 
            case 1:
            cout<<"BALANCE: $"<<balance<<endl;
            cout<<"\n";
            break;

            case 2:
            cout<<"Type the amount\n";
            cout<<"\n";
            cin>>withdraw;
            if(withdraw <= balance){ 
            balance -= withdraw; //edits the balance variable.
            cout<<"\n";
            cout<<"Please collect your cash!\n";
            cout<<"Thank you for using the ATM!\n";
            cout<<"New Balance: $"<<balance<<endl;
            cout<<"\n";
            } else{
                cout<<"\n";
                cout<<"Insufficient funds!\n";
                
            }
            break;

            case 3:
            cout<<"Please deposit the cash and confirm the amount!\n";
            cout<<"\n";
            cin>>deposit;
            balance += deposit;
            cout<<"\n";
            cout<<"$"<<deposit<<" has been deposited to your account!\n";
            cout<<"New Balance: $"<<balance<<endl;
             cout<<"\n";
            break;

            case 4:
            cout<<"You have exited the ATM!\n";
            exitATM = true;//ends the loop.
            break;
        
            default:
            cout<<"Invalid Option! Please Try Again.\n";
            cout<<"\n";  
            break;
        
    }
        
    }


    return 0;
}