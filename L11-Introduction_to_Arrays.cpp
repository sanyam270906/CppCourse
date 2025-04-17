#include <iostream>
using namespace std;
int main(){
    //Arrays are like containers in which we can store multiple values of the same type.

    int numbers[5]; //Declaring and array containing five integers. (Arrays in C++ start from index 0)
    
    numbers[0] = 10; //Storing values.
    numbers[1] = 5;
    numbers[2] = 20;
    numbers[3] = 45;
    numbers[4] = 11;

    cout<<numbers[0]<<endl; //Printing values.
    cout<<numbers[1]<<endl;
    cout<<numbers[2]<<endl;
    cout<<numbers[3]<<endl;
    cout<<numbers[4]<<endl;

    //LOOPS WITH ARRAYS
    int marks[5];
    cout<<"Enter five marks!\n";
    for(int i = 0; i < 5; i++){
        cin>>marks[i];
    }
    cout<<"You entered: \n"; //marks[0] to [4] store values and loops make input and output much easier
    for(int i = 0; i <5; i ++){
        cout<<marks[i]<<" ";
        
    }                          
    cout<<endl; 

    //10 INTEGERS
    int a[10]; int sum = 0;
    cout<<"Type 10 integers!\n";
    for(int i = 0; i < 10; i++){
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Your integers: \n";
    for(int i = 0; i < 10; i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    cout<<"Sum of your integers: \n";

    for(int i = 0; i < 10; i++){
        sum += a[i];
        if (i < 9){
            cout<<a[i]<<" + ";
        }
        else{
            cout<<a[i]<<" = "<<sum<<endl;
        }

    }

    int maxVal = a[0]; //setting maxVal as the first index value and it will change everytime an integer is greater than a[0].
    for(int i = 0; i < 10; i++){
        if(a[i] > maxVal){
            maxVal = a[i];
        }
    }
    cout<<"Maximum value: "<<maxVal<<endl;

    //REVERSE PRINT

    int n[5];
    cout<<"type 5 integers! \n";
    for(int i = 0; i < 5; i++){
        cin>>n[i];
    }
    cout<<endl;
    cout<<"You entered: \n";
    for(int i = 4; i >= 0; i--){
        cout<<n[i]<<" ";
    }
    cout<<endl;
    return 0;
}