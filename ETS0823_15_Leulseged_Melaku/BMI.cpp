//a c++ program that calculates the body mass index of a person
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //declaring variables
    float weight, height, BMI;

    //input the wight and height
    cout<<"please enter the weight and hight of the person respectively"<<endl;
    cout<<"weight(in KG)=>";
    cin>>weight;
    cout<<"height(in  M)=>";
    cin>>height;

    //opreate the BMI
    BMI = weight/(pow(height,2));

    //display BMI
    cout<<"The body mass index of the person is "<<BMI<<" KG/M^2";

    return 0;
}