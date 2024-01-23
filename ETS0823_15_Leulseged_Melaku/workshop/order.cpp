#include<iostream>

using namespace std;

int main(){

    int elt;
    cout<<"how many elements -";
    cin>>elt;

    int ar[elt] = {};

// 1 ,3 ,2 ,1
    for (int i = 0; i < elt; ++i){
        cout<<"enter element "<<i + 1<<" : ";
        cin>>ar[i];
    }

    // 1 , 3 ,2 ,1, 

    for (int a = 0; a < elt; ++a){
        for (int b = 0; b < elt; ++b){
            if (b != a){
                if (ar[b + 1] < ar[b]){
                    int temp = ar[b];
                    ar[b] = ar[b + 1];
                    ar[b + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < elt; ++i){
        cout<<ar[i]<<" ";
    }



    return 0;
}