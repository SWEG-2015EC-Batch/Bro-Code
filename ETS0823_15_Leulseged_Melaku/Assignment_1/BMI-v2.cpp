//a c++ program that calculates the body mass index of a person
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //declaring variables
    float weight, height, BMI;
    string gender;
    int n;

    cout<<"Enter the number of people you want to calculate :";
    cin>>n;
    while(n>0){
        cout<<"please enter the weight and hight of the person respectively"<<endl;
        cout<<"weight(in KG)";
        cin>>weight;
        if(weight == 0){
            return 0;
        }
        cout<<"height(in  M)=>";
        cin>>height;
    
        //opreate the BMI
        BMI = weight/(pow(height,2));
    
        //display BMI
        cout<<"The body mass index of the person is "<<BMI<<" KG/M^2 \n";
    
        cout<<"enter your gender =>";
        cin>>gender;
        
        if (BMI >= 30){
            cout<<"Obesity";
            cout<<"\n\n\n";
            
        }
        else{
            if (gender == "Female" || gender == "F"){
                if(BMI < 18.5){
                    cout<<"Under Weight";
                    cout<<"\n\n\n";
                    
                }else if(18.5 >=BMI<= 24.9){
                    cout<<"Normal weight";
                    cout<<"\n\n\n";
                    
                }else{
                    cout<<"Over weight";
                    cout<<"\n\n\n";
                    
                }
            }
            else if (gender == "Male" || gender == "M"){
                if(BMI < 20.5){
                    cout<<"Under Weight";
                    cout<<"\n\n\n";
                    
                }else if(20.5 >= BMI<=25.9){
                    cout<<"Normal weight";
                    cout<<"\n\n\n";
                    
                }else{
                    cout<<"Over weight";
                    cout<<"\n\n\n";
                    
                }
            }
            else{
                cout<<"Invaid input. If you are a male insert \"Male\" or \"M\" and if you are a female insert \"Female\" or \"F\"";
                cout<<"\n\n\n";
                
            }
        }
        cout<<"\n";
        n--;
    }

    return 0;
}