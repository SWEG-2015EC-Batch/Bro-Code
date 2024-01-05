#include<iostream>
using namespace std;
int main(){
    float num1,num2 ,counter=0;
    char op;
    cout<<"Enter first number ->";
    cin>>num1;
    do
    {
        cout<<"Choose opreator -('+','-','*','/') (enter 0 to cancel opreation ) (= to see the result)";
        cin>>op;
        switch (op)
        {
        case '0':
            counter = 1;
            break;
        case '+':
            cout<<"Enter another number ->";
            cin>>num2;
            num1 += num2;
            break;
        case '-':
            cout<<"Enter another number ->";
            cin>>num2;
            num1 -= num2;
            break;
        case '*':
            cout<<"Enter another number ->";
            cin>>num2;
            num1 *= num2;
            break;
        case '/':
            cout<<"Enter another number ->";
            cin>>num2;
            if (num2 != 0){
                num1 /= num2;
            }else{cout<<"can't be 0\n";}
            break;
        case '=':
            cout<<"final result ->"<<num1<<endl;
            cout<<"Enter first number ->";
            cin>>num1;
            break;
        
        default:
            cout<<"Invalid opreation";
            break;
        }
    } while (counter == 0);
    
    
    return 0;
}