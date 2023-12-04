#include<iostream>
using namespace std;
int main()
{
    int counter=0;
    char op;
    cout<<"enter the first number :";
    float num1;
    float num2;
    cin>>num1;
    do{
        cout<<"enter ('+', '-', '*','/', '=' ) and type '0' to stop:  ";
        cin>>op;
        switch(op){
            case '0':
                 counter=1;
                 break;
            case '+':
                cout<<"enter the next number";
                cin>>num2;
                num1+=num2;
                break;
            case '-':
                cout<<"enter the next number: ";
                cin>>num2;
                num1-=num2;
                break;
            case '*':
                cout<<"enter the next number: ";
                cin>>num2;
                num1*=num2;
                break;
            case '/':
                cout<<"enter the next number: ";
                cin>>num2;
                if(num2!=0){
                num1/=num2;
                break;}
                else{ cout<<"undefined! "<<endl;
                }
                
                break;

            case '=':
                cout<<"final result: "<<num1<<endl;
                cout<<"enter the firat number: ";
                cin>>num1;
                break;
            default: cout<<"enter valid operator! ";
        }
    }while(counter==0);
    return 0;
}
