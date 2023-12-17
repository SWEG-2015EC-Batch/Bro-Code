#include<iostream>
using namespace std;
int main(){
    float total_mark=0,input;
    
    cout<<"test (15%) =>";
    cin>>input;
    total_mark += input;
    cout<<"quiz (5%) =>";
    cin>>input;
    total_mark += input;
    cout<<"project (20%) =>";
    cin>>input;
    total_mark += input;
    cout<<"assignment (10%) =>";
    cin>>input;
    total_mark += input;
    cout<<"final exam (50%) =>";
    cin>>input;
    total_mark += input;
    
    if (0<= total_mark && total_mark <=100){
        if (total_mark <=100 && total_mark >= 90){
            cout<<"you got A+";
        }else if(80<=total_mark && total_mark <90){
            cout<<"you got A";
        }else if(75<= total_mark && total_mark <80){
            cout<<"you got B+";
        }else if(60<= total_mark && total_mark <75){
            cout<<"you got B";
        }else if(55<= total_mark && total_mark <60){
            cout<<"you got C+";
        }else if(45<= total_mark && total_mark <55){
            cout<<"you got C";
        }else if(30<= total_mark && total_mark <45){
            cout<<"you got D";
        }else{
            cout<<"you got F";
        }
    }
    else{
        cout<<"you entered something error the total number have to be betweeen 0 and 100 \n";
    }
    cout<<"\nyour total mark is "<<total_mark<<endl;

    cout<<"enter 0 to exit or enter 1 to calculate again =>";
    int menu;
    cin>>menu;
    if (menu == 1){
        main();
    }
    return 0;
}