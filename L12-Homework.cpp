#include <iostream>
using namespace std;
//PRINT ARRAY
void printArray(int ar[], int size){
    cout<<"Here are your values: ";
    for(int i = 0; i < size; i++){
        cout<<ar[i]<<" ";
    }
}
//AVERAGE
float average(int ar[], int size){
     float avg = 0;
    for(int i = 0; i < size; i++){
        avg += ar[i];
    }
    return avg/size;
}
//MINIMUM VALUE
int minVal(int ar[], int size){
    int min = ar[0];
    for(int i = 0; i < size; i++){
        if(ar[i] < min){
            min = ar[i];
        }
    }
    return min;
}

int main() {
    ios::sync_with_stdio(false);
    int num; 
    for(;;){
        cout<<"How many integers do you want to evaluate?\n";
        cin>>num;
        if(num < 100){
            break;
        }else{
            cout<<"You cannot evaluate more than 100 values!\n";
        }
    }   
        int a[num];
        cout<<"Type your values!\n";
        for(int i = 0; i < num; i++){
            cin>>a[i];
        }
        printArray(a, num);
        cout<<endl;
        float AVG = average(a, num);
        cout<<"Average: "<<AVG<<endl;
        int MIN = minVal(a, num);
        cout<<"Minimum Value: "<<MIN;

    return 0;
}