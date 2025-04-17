#include <iostream>
#include <string> 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    string sentence;
    for(;;){
    cout<<"Type a sentence!\n";
    getline(cin, sentence);
    
    if(sentence.empty()){  //states that sentence has no characters.
        cout<<"You entered nothing!\n";
    }
    else{
    cout<<"You sentence says, "<<sentence<<endl;
    cout<<"There are "<<sentence.length()<<" characters in your sentence.\n";
    cout<<"These are all the characters used in your sentence: \n";
    for(int i = 0; i<sentence.length(); i++){
        cout<<sentence[i]<<endl;
    }
    cout<<"the first letter of your sentence is "<<sentence[0]<<endl;
    cout<<"the last letter of your sentence is "<<sentence[sentence.length()-1]<<endl;
    break;
}
}
    return 0;
}
