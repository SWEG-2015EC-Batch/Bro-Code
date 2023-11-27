//  print the body mass index of peoples by giving height and weight

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
      
      cout<<"enter the number of people you want to calculate \n";
      int n;
      cin>>n;
      for(int i=1; i<=n; i++){

      double height, weight;
      cout<<"person #"<<i<<endl;
      cout<<"Enter weight in Kg: ";  // input weight of the person from the user 
      cin>>weight;   
      cout<<"enter height in m: ";    // input  hieght of the person from the user
      cin>>height;
      char gender;  
      cout<<"Enter the gender of the person: ";
      cin>>gender;  // reading gender from the user 
      // diplay BMI
      double BMI= weight/pow(height,2);
      if(gender=='F'){
            
      cout<<"your BMI is "<<BMI<<" kg/m^2\n";
            if(BMI<18.5){
             cout<<"it  is under weight "<<endl<<endl;
            } else if(BMI>=18.5&&BMI<=24.9){
                  cout<<"it is normal weight "<<endl<<endl;
            } else if(BMI>=25&&BMI<=29.9){
                  cout<<"it is over weight "<<endl<<endl;
            } else{
                  cout<<"It is obesity "<<endl<<endl;
            }
      } else if(gender=='M'){
             cout<<"your BMI is "<<BMI<<" kg/m^2\n";
            if(BMI<20.5){
                  cout<<"it is under weight "<<endl<<endl;
            } else if(BMI>=20.5&&BMI<=25.9){
                  cout<<"it is normal weight "<<endl<<endl;
            } else if(BMI>=26&&BMI<=29.9){
                  cout<<"it is ovevr weight "<<endl<<endl;
            } else{
                  cout<<"it is obesity "<<endl<<endl;
            }
      } else{
            cout<<" enter a valid gender if it is male enter \"male\" or enter \"female\" "<<endl;
      }
      }
      
      return 0;
}