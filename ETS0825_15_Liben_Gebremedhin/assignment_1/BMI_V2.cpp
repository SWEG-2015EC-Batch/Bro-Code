//a c++ program that calculates the body mass index of a person
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout << "For how many people do you want to do this? " << endl;
    int n;
    cin >> n;
    while(n > 0){
        //declaring variables
    float weight, height, BMI;
    string gender;

    //input the wight and height
    cout<<"please enter the weight and hight of the person respectively"<<endl;
    cout<<"weight(in KG)=> ";
    cin>>weight;
    cout<<"height(in  M)=> ";
    cin>>height;

    //opreate the BMI
    BMI = weight/(pow(height,2));

    //display BMI
    cout<<"The body mass index of the person is "<<BMI<<" KG/M^2" <<endl;

    cout << "Please enter you gender: ";
    cin >> gender;
    cout << "Your are " << gender << endl;

    if(BMI >= 30){
        cout << "You are obese YO" << endl;
    }
    else{
        if (gender == "Male"){
            if (BMI < 20.5){
                cout <<" You are under weight bruv you gotta eat more lol!" << endl;
            }
            else if (20.5 <= BMI <= 25.9){
                cout <<" You have a normal weight dude keep it up!"<< endl;
            }
            else if (26 <= BMI <= 29.9){
                cout <<" You are over weight man. Time to put the forks down!" << endl;    
            }
        if (gender == "Female"){
            if (BMI < 18.5){
                cout <<" You are under weight girl you gotta eat more lol!" << endl;
            }
            else if (18.5 <= BMI <= 24.9){
                cout <<" You are in shape girl keep it up!" << endl;
            }
            else if (25 <= BMI <= 29.9){
                cout <<" You are over weight Yo. Time to put the forks down!" << endl;

        }
        }
    }}

    n--;
    }
    return 0;
} 