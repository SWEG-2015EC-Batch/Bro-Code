#include<iostream>

using namespace std;

int main(){
    int count=0;

    string str;

    cout<<"your name -";
    cin>>str; //lldusi


    bool exist = false;
    char array[size(str)] = {};
    int array2[size(str)] = {};

    int s = size(str);
     // 2 2 4 6 2 4 7 2 6
     // lul
    for (int i = 0; i < s; i++){

        for(int j = 0; j < s; j++){
            if (array[j] == str[i] && array2[j] != 0){
                array2[j]++;
                exist = true;
            }
            if (array2[j] != 0){
                count += 1;
            }
        }
        if (exist == false){
            array[count] = str[i];
            array2[count] = 1;
        }


        count = 0;
        exist = false;
    }

    
    for (int i = 0; i < s; i++){
        if (array2[i] != 0){
            cout<<array[i]<<" "<<array2[i]<<endl;
        }
    }
    
    return 0;
}