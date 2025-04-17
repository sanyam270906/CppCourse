#include <iostream>
#include <string>
using namespace std;

//PALINDROME CHECKER (Palindrome means a word/sentence that reads the same forward and backward.)
bool isPal(string s){
    int start = 0;
    int end = s.length()-1;

    while(start < end){
        if(s[start] != s[end]){
            return false;
        }
        start ++;
        end --;
    }
    return true;
}

//REVERSING A STRING
string reverseString(string s){
    string reverse = "";
    for(int i = s.length()-1; i >= 0; i--){
        reverse += s[i];
    }
    return reverse;
}

//FREQUENCY OF CHARACTERS
void printFrequency(string s){
/*All alphabets and symbols are basically numbers with an ASCII value so we can store them in arrays as well.
  We are alloting all ASCI codes with an initial value of 0. Evertime a value goes through the loop, it's value increases by 1.
  So we get all ASCI codes with a value > 0, then we use (char)i to turn those codes back into characters and display the number of times they apperared.   
*/
int frequency[256] = {0};
    for(int i = 0; i < s.length(); i++){
        frequency[s[i]]++;
    }
    cout<<"Character frequencies: \n";
    for(int i = 0; i < 256; i++){
        if(frequency[i] > 0){
        cout<<" '"<<(char)i<<"' : "<<frequency[i]<<endl; //(char)i converts the ASCII values back into characters.
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    string sentence;
    for(;;){
        cout<<"Type a word/sentence!\n";
        getline(cin, sentence);
        
        if(sentence.empty()){  
            cout<<"You entered nothing!\n";
        }
        else{
            if(isPal(sentence)){
                cout<<"Your word/sentence is a palindrome!\n";
            }else{
                cout<<"Your word/sentence is not a palindrome!\n";
            }

            string reverse = reverseString(sentence);
            cout<<"The reverse of your word/sentence is "<<reverse<<endl;

            printFrequency(sentence);
            cout<<endl;
        }
    }
    return 0;
}
