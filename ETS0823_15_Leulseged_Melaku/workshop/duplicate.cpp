#include<iostream>

using namespace std;

int main(){
    string w;

    cout<<"enter a word -";
    cin>>w;

    string c;
    // ludisludis
    for (int i = 0; i < w.length(); ++i){
        for ( int j = 0; j < w.length(); ++j){
            if (i != j){
                if (w[i] == w[j]){
                    w[j] = '[';
                }
            }
        }
    }

    for( int i = 0; i < w.length(); ++i){
        if(w[i] != '['){
            cout<<w[i];
        }
       
    }   
    return 0;
}