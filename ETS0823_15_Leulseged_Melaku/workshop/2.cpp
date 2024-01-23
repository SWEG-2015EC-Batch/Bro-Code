#include<iostream>

using namespace std;

int main(){
    int elt1,elt2,elt3;

    cout<<"How many elements in array 1 :";
    cin>>elt1;

    int array1[elt1] = {};

    for (int i = 0; i < elt1; i++){
        cout<<"Enter elemen1 "<<i + 1<<" : ";
        cin>>array1[i];
    }

    cout<<"How many element1 in array 2 :";
    cin>>elt2;
    
    int array2[elt2] = {};

    for (int i = 0; i < elt2; i++){
        cout<<"Enter element "<<i + 1<<" : ";
        cin>>array2[i];
    }

    cout<<"How many elements in array 3 :";
    cin>>elt3;
    
    int array3[elt3] = {};

    for (int i = 0; i < elt3; i++){
        cout<<"Enter element "<<i + 1<<" : ";
        cin>>array3[i];
    }

    for (int i = 0; i < elt1; i++){
        for (int j = 0; j < elt2; j++){
            for(int k = 0; k < elt3; k++){
                if (array1[i] == array2[j] && array1[i] == array3[k]){
                    cout<<"common element "<<array1[i]<<endl;
                }
            }
        }
    }

    return 0;
}