#include<iostream>

using namespace std;

int main(){
    sring s,temp;
    cout<<"enter a sentence \n";
    getline(cin,s)


    string wo[s.length()];
    int count[s.length()];

    // ,2,5,4,9
    

    for(int i = 0; i < s.length(); ++i){
        if(s[i] != ' '){
            temp[temp.length()] = s[i];
        }else{
            wo[wo.length()] = temp;
        }
    }
    
    cout<<wo[0]<<" "<<wo[1];
    return 0;
}