//a c++ program that calculates the body mass index of a person
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //declaring variables
    float weight, height, BMI;
    string M = "Male", F ="Female";
    string gender;



    //input the wight and height
    cout<<"please enter the weight and hight of the person respectively"<<endl;
    cout<<"weight(in KG)=>";
    cin>>weight;
    cout<<"height(in  M)=>";
    cin>>height;
    cout<<"Enter your Gender ";
    cin>>gender;

    BMI = weight/(pow(height,2));

if (gender==M && BMI >=30 ){
     cout<<"You are a "<<M<< " and "<<"Your are obese"<<endl;
    }
else if(gender==M && 20.5<= BMI<= 25.9 ){
    cout<<"You are a "<<M<<" and your BMI is normal"<<endl;
    }
else if(gender==M && BMI< 20.5 ){
    cout<<"You are a "<<M<<" and you are underweight"<<endl;
    }
else if(gender==M && 26<=BMI<= 29.9 ){
    cout<<"You are a "<<M<<" and you are overweight"<<endl;
    }
if (gender==F && BMI >=30 ){
     cout<<"You are a "<<F<< " and "<<"Your are obese"<<endl;
    }
else if(gender==F && 18.5<= BMI<= 24.9 ){
    cout<<"You are a "<<F<<" and your BMI is normal"<<endl;
    }
else if(gender==F && BMI< 18.5 ){
    cout<<"You are a "<<F<<" and you are underweight"<<endl;
    }
else if(gender==F && 25<=BMI<= 29.9 ){
    cout<<"You are a "<<F<<" and you are overweight"<<endl;
    }

else{
    cout<<"Enter a valid info";
 }
    



    //opreate the BMI
   

    //display BMI
   // cout<<"The body mass index of the person is "<<BMI<<" KG/M^2";

    return 0;
}