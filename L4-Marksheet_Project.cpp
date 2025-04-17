#include <iostream>
using namespace std;
int main(){
//GRADING A MARKSHEET
int maths; int physics; int chemistry; int english; int IT;
char m; char p; char c; char e; char i;
string evaluation;

cout<<"How much did you score in maths?\n";
cin>>maths;
cout<<"How much did you score in physics?\n";
cin>>physics;
cout<<"How much did you score in chemistry?\n";
cin>>chemistry;
cout<<"How much did you score in english?\n";
cin>>english;
cout<<"How much did you score in IT?\n";
cin>>IT;

if (maths >= 90) {
m = 'A';                   //assigning values to the variables with conditions.
} else if (maths >= 80) {
 m = 'B';
} else if (maths >= 33){ 
 m = 'C';
} else {
 m = 'F';
}

if (physics >= 90) {
p = 'A';                    
} else if (physics >= 80) {
 p = 'B';
} else if (physics >= 33){ 
 p = 'C';
} else {
 p= 'F';
}

if (chemistry >= 90) {
 c = 'A';
} else if (chemistry >= 80) {
 c = 'B';
} else if (chemistry >= 33){ 
 c = 'C';
} else {
 c = 'F';
}

if (english >= 90) {
 e = 'A';
} else if (english >= 80) {
 e = 'B';
} else if (english >= 33){ 
 e = 'C';
} else {
 e ='F';
}
if (IT >= 90) {
 i = 'A';
} else if (IT >= 80) {
 i = 'B';
} else if (IT >= 33){ 
 i = 'C';
} else {
 i = 'F';
}
if (maths>=33 && physics>=33 && chemistry>=33 && english>=33 && IT>=33){    //&& is used to have multiple conditions in one conditional statement.
 evaluation = "PASS";
}
else{
    evaluation = "FAIL";
}
cout<<"-----------------------------\n";
cout<<"          Marksheet\n";
cout<<"Subject:  Marks:   Grade:\n";
cout<<"MATHS     "<<maths<<"       "<<m<<endl;
cout<<"PHYSICS   "<<physics<<"       "<<p<<endl;
cout<<"CHEMISTRY "<<chemistry<<"       "<<c<<endl;
cout<<"ENGLISH   "<<english<<"       "<<e<<endl;
cout<<"IT        "<<IT<<"       "<<i<<endl;
cout<<"\n";
cout<<"Marks obtained: "<<maths+physics+chemistry+english+IT<<"/500\n";
cout<<"Percentage: "<<((maths+physics+chemistry+english+IT)/500.0)*100<<"%\n";
cout<<"Evaluation: "<<evaluation<<endl;
cout<<"-----------------------------\n";
 /*writing 500 would give integer division before multiplying with 100 so the answer will be 0, 
   to fix that we convert atleast one number to float or double like 500.0 in this case.*/

    return 0;
}