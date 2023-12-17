#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Ok let's play with numbers please enter any integer =>";
    cin>>a;
    int a2 = a;
    int reverse= 0;
    int count = 0;
    int sum = 0;
    int even = 1;
    int last = -1;
    int first;
    int swap;
    cout<<"reversed number :";
    while(a % 10 == 0){
        cout<<0;
        a /= 10;
        count += 1;
        if (last == -1){
            last = 0;
        }
    }
    while(a>0){
        int temp = (a%10);
        if (last == -1){
            last = 0;
            last += temp;
        //    swap += temp;
        }
        reverse = (reverse*10) + temp;
        a /= 10;
        count += 1;
        sum += temp;
        if (temp % 2 == 0){
            even *= temp;
        }
    }
    first = reverse % 10;
    cout<<reverse<<endl;
    cout<<"there are "<<count<<" digits\n";
    cout<<"total sum of the digits :"<<sum<<endl;
    cout<<"total product of the even numbers :"<<even<<endl;
    cout<<"first number :"<<first<<endl;
    cout<<"last number :"<<last<<endl;

    int middle;
    if(count == 1){
        cout<<"1st and last number swapped :"<<a2<<endl;
    }else if(count == 2){
        cout<<"1st and last number swapped :"<<(last * 10) + first<<endl;
    }
    else{
        string a3 = to_string(a2);
        a3 = a3.substr(1, a3.length() - 2);
        middle = stoi(a3);
        swap = (((last * ((count - 2) * 10)) + (middle)) * 10) + first;
        cout<<"1st and last number swapped :";

        if(last == 0){
            cout<<"0";
        }
        if(middle == 0){
            cout<<"0";
        }
        cout<<swap<<endl;
    }

    return 0;
}