// print convert the lowercase to upper or vice versa

#include<iostream>
#include<stdio.h>
#include<ctype.h>

using namespace std;
int main()
{
    char str;
    cout<<"enter a letter";
    cin>>str;
    if(islower(str)){
        str = toupper(str);
        cout<<str;
    }else if(isupper(str)){
        str = tolower(str);
        cout<<str;
    }else{
        cout<<"enter a valid letter";
    }
    return 0;
}