#include<iostream>

using namespace std;

int main(){
    string name;
    int elt;
    int freq,nfreq;

    cout<<"What is your name? -";
    getline(cin,name);

    cout<<"How many elements? -";
    cin>>elt;

    int arr[elt] = {};
    int frequency[elt][2] = {};

    for (int i = 0; i < elt; i++){
        cout<<"Enter number "<<i + 1<<" :";
        cin>>arr[i];
    }

    for (int i = 0; i < elt; i++){
        for (int j = 0; j < elt; j++){
            if (i != j){
                if (arr[i] == arr[j]){
                    frequency[i][0] += 1;
                }
                else{
                    frequency[i][1] += 1;
                }
            }
        }
    }

    for(int i = 0; i < elt; i++){
        if (frequency[i][1] == elt -1){
            nfreq = arr[i];
            break;
        }
    }

    for (int i = 0; i < elt; i++){
        if (frequency[i][0] > 0){
            freq = arr[i];
            break;
        }
    }

    cout<<"Hi "<<name<<", the first frequent element is "<<freq<<" and the first non-freq element is "<<nfreq<<endl;

}