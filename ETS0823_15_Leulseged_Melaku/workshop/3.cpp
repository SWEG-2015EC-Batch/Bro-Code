#include<iostream>

using namespace std;

int main(){
    int elt,temp,count;
    cout<<"how many elements -";
    cin>>elt;
    bool exist = false;
    int array[elt][2] = {{2,2}};


     // 2 2 4 6 2 4 7 2 6
    for (int i = 0; i < elt; i++){
        cout<<"enter element "<<i+1<<" :";
        cin>>temp;

        for(int j = 0; j < elt; j++){
            if (array[j][0] == temp){
                array[j][1]++;
                exist = true;
            }
            if (array[j][1] != 0){
                count += 1;
            }
        }
        if (exist == false){
            array[count][0] = temp;
            array[count][1] = 1;
        }


        count = 0;
        exist = false;
    }

    
    for (int i = 0; i < elt; i++){
        if (array[i][0] != 0 and array[i][1] != 0){
            cout<<array[i][0]<<" "<<array[i][1]<<endl;
        }
    }
    
    return 0;
}