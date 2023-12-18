#include<iostream>
using namespace std;
int main(){
    float mid,fin;
    int counter = 1;
    while(counter != 0){
        cout<<"mid exam(40%) =>";
        cin>>mid;
        if (!(mid>=0 && mid<=40)){
            cout<<"mid exam should be between 0 and 40\n";
            continue;
        }else{
            cout<<"fianl exam(60%) =>";
            cin>>fin;
            if (!(fin>=0 && fin<=60)){
                cout<<"final exam should be between 0 and 60\n";
                continue;
            }else{
                float total = mid + fin;
                if(total >=90 && total <= 100){
                    cout<<"you got A+\n";
                }else if(total >=80 && total < 90){
                    cout<<"you got A\n";
                }else if(total >=70 && total < 80){
                    cout<<"you got B\n";
                }else if(total >=60 && total < 70){
                    cout<<"you got C\n";
                }else if(total >=50 && total < 60){
                    cout<<"you got D\n";
                }else{
                    cout<<"you got F\n";
                }
                int cont;
                cout<<"enter any number to continue else enter 0 :";
                cin>>cont;
                if(cont == 0){
                    counter = 0;
                }else{
                    counter =1;
                }
                
            }
        }
    }
    return 0;
}