// 
#include<iostream>
using namespace std;
int main(){
    
    int n = 10;
    // max = n * 2 + 1

    for (int i = 0; i < n-1; i++){
        for (int j = n-2; j >= 0; j--){
            if (j <= i){
                cout<<j;
            }
        }


        for (int j = n-2; j >= i; j--){
            cout<<" ";
        }


        for (int j = 0; j <= i; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}







        