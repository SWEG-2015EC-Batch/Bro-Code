//  print the body mass index of peoples by giving height and weight

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     double height, weight;
      cout<<"Enter weight in Kg: ";
      cin>>weight;
      cout<<"enter height i m: ";
      cin>>height;
      double BMI= weight/(height*height);
      cout<<"your BMI is "<<BMI<<" kg/m^2\n";
      return 0;
}