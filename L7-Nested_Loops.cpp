#include <iostream>
using namespace std;
//nested loop is when a loop runs inside another loop.
int main(){

//RECTANGLE PATTERN
for (int i = 1; i <= 3; i ++){      //Outer Loop
    for (int j = 1; j <= 5; j ++){  //Inner Loop
        cout<<" * ";  //Prints five stars in a line.
    }
    cout<<endl; //Goes to next line after inner loop ends.
}
cout<<endl;

//SQUARE PATTERN
for (int a = 1; a <= 5; a++){
    for (int b = 1; b <= 5; b++){
        cout<<" * ";
    }
    cout<<endl;
}
cout<<endl;

//RIGHT ANGLED TRIANGLE
for (int c=1;c<=5;c++){
    for (int d=1;d<=c;d++){
        cout<<" * ";
    }
        cout<<endl;
}
cout<<endl;

//INVERTED RIGHT ANGLES TRIANGLE
for (int c=5;c>=1;c--){
    for (int d=1;d<=c;d++){
        cout<<" * ";
    }
        cout<<endl;
}
//RIGHT ANGLED TRIANGLE (NUMBERS)
for (int c=1;c<=5;c++){
    for (int d=1;d<=c;d++){
        cout<<" "<<d<<" ";
    }
        cout<<endl;
}
//VERTICAL TRIANGLE

for (int c=1;c<=5;c++){
    for (int d=1;d<=c;d++){
        cout<<" * ";
    }
        cout<<endl;
}
for (int c=5;c>=1;c--){
    for (int d=1;d<=c;d++){
        cout<<" * ";
    }
        cout<<endl;
}



    return 0;
}