#include<iostream>
using namespace std;
int main(){
    int a = 2340;
    int rev= 0;
    int count = 0;
    int sum = 0;
    int even = 1;
    int last = 0;
    int first = 0;
    int swap = 0;

    if (a % 10 == 0){
        cout<<0;
    }
    while(a>0){
        int temp = (a%10);
        if (last == 0){
            last += temp;
            swap += temp;
        }
        rev = (rev*10) + temp;
        a /= 10;
        count += 1;
        sum += temp;
        if (temp % 2 == 0){
            even *= temp;
        }
    }
    first = rev % 10;



    cout<<rev<<endl;
    cout<<count<<endl;
    cout<<sum<<endl;
    cout<<even<<endl;
    cout<<last + first<<endl;



    return 0;
}