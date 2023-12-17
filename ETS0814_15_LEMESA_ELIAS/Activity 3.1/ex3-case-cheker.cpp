#include<iostream>
#include <cctype>
using namespace std;
int main(){
    char input;
    int a = 0;
    while (a == 0){
        cout<<"Enter something (enter e to cancel opreation) ->";
        cin>>input;

        if (input != 'e'){
            if(isdigit(input)){
                if (input % 2 == 0){
                    cout<<"It's an even number \n";
                }else{
                    cout<<"It's an odd number \n";
                }
            }else if (isalpha(input)){
                if (isupper(input)){
                    cout<<"It's an upper case character ";
                }else{
                    cout<<"It's a lower case character ";
                }
                char b = tolower(input);
                if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'){
                    cout<<"and it's vowel \n";
                }else{
                    cout<<"and it's consonant \n";
                }
            }else{
                cout<<"It's a special charater \n";
            }
        }else{
            cout<<"It's a lower case character and it's vowel\n";
            a = 1;
        }
    }
    return 0;
}
