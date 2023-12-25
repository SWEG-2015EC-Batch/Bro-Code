#include<iostream>
using namespace std;
int main(){
    string weekend = "productive";
    int n = 7;
    string day[n] = {"firiday night","saturday morning","saturday afternoon","saturday evening","sunday morning","sunday afternoon","sunday evening"};
    int percent[n]= {90,99,60,99,99,50,99};
    int sum = 0;

    cout<<"I am leul and my weekend is "<<weekend<<" and my statuses are:\n";
    for (int i=0;i<n;i++){
        cout<<day[i]<<" -> "<< percent[i]<<"%\n";
        sum += percent[i];
    }
    cout<<"and my average is "<<sum/n<<"%\n";
    return 0;
}
/*
- array elements can be accessed only by it's index, the array index rages from 0 to n-1 where n is the length of the array
- [] -to specify the size or the length of an array at the time of declaration
     -to specify the index of particular array element
     -
the memory address -> 0x763787347.....
*/
