#include<iostream>
using namespace std;
int main(){
    // array element can be accessed only by it's index, the array index ranges from 0 to n-1 where n is the length of arrray
    /* [] can be used in to context A. to specify the size or the length of an array at the time of declaration
     B. to specify the index of particular array element.
     for loop is the common looping statement that used to access(navigate) array elements.
     ** we can access the entire string or by index and with out index
    */
    string expression= "dizzy";
    int sum=0;
    string day1[]={"friday ", "monday ", "tuesday "," thursday"};
    string day[7]= {"friday night", "saturday morning", "saturday evening", "saturday night", "sunday morning", "sunday evening", "sunday night"};
    int arr[7]= {85, 90, 65, 55, 60, 80, 45};
    cout<<day1<<" ";
    cout<<"This liyu my weekend was "<<expression<<endl;
    for (int i=0; i<7; ++i){
        cout<<day[i]<<"--> "<<arr[i]<<"%"<<endl;
        sum +=arr[i];
    }
    cout<<"Average is "<<sum/7<<"%"<<endl;
    int voltage[]= {89, 75, 82, 93, 78, 95,81, 88, 77, 82};
    double precision[]= { 11.62, 13.98, 18.45, 12.68, 14.76};
    char list[15]= {'f', 'j', 'm', 'q', 't', 'w',  'z'};
    for (int i=0; i<sizeof(voltage)/sizeof(voltage[0]); ++i){
      cout<<voltage[i]<<" ";
    }
    cout<<endl;
    for (int j=0; j<sizeof(precision)/sizeof(precision[0]); ++j){
        cout<<precision[j]<<" ";
        } 
        cout<<endl;
    for(int k=0; k<15; ++k){
        cout<<list[k]<<" ";
    } 
    cout<<endl;
    
   string name;
   cout<<"what is your name"<<endl;
   cin>>name;
   cout<<"the reversed string "<<endl;
   for(int i=size(name)-1; i>=0; --i){
    cout<<name[i];
   }
    return 0;
}
