#include <iostream>
using namespace std;
//PRINT ARRAY
void printArray(int arr[], int size){ //using functions to make arrays reusable and easier to code.
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//SUM OF VALUES IN ARRAY
void getsum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
       sum += arr[i];
       if(i < 9){
        cout<<arr[i]<<" + ";
       } else{
        cout<<arr[i]<<" = "<<sum;
       }
    }
    cout<<endl;
}
//MAX VALUE IN ARRAY
int getMax(int arr[], int size){
    int maxVal= arr[0];
    for(int i = 0; i < size; i++){
       if(arr[i] > maxVal){
        maxVal = arr[i];
        
       } 
    }
    return maxVal;
}

int main() {
    ios::sync_with_stdio(false); //this is just for better performance.
    
    int a[10];
    cout<<"Type 10 integers!\n";
    for(int i = 0; i < 10; i++){
        cin>>a[i];
    } 
    cout<<endl;
    cout<<"Your integers: ";
    printArray(a, 10);

    cout<<"Sum of your integers: ";
    getsum(a, 10);
    
    int max = getMax(a, 10); //we have to declare this because getMax is int() which returns a value unlike void which prints.
    cout<<"The maximum value of your integers is "<<max<<endl;;
   
    return 0;
}

