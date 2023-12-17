#include<iostream>
using namespace std;
int main(){
    float gross_salary,worked_hour,income_tax_rate,bonus_rate,net_salary,bonus_payment=0;

    cout<<"what is the gross salary =>";
    cin>>gross_salary;
    cout<<"insert the total worked hours =>";
    cin>>worked_hour;
    if (gross_salary < 200){
        income_tax_rate = 0;
    }else if(200<=gross_salary<600){
        income_tax_rate = 0.1;
    }
    else if(600<=gross_salary<1200){
        income_tax_rate = 0.15;
    }
    else if(1200<=gross_salary<2000){
        income_tax_rate = 0.2;
    }
    else if(2000<=gross_salary<3500){
        income_tax_rate = 0.25;
    }else{
        income_tax_rate = .3;
    }

    float pension = gross_salary * 0.07;
    float income_tax = gross_salary * income_tax_rate;

    if (worked_hour > 40){
        cout<<"what is the bonus rate money? =>";
        cin>>bonus_rate;

        bonus_payment = bonus_rate * (worked_hour - 40);
    }
        net_salary = gross_salary + bonus_payment -( pension + income_tax);

        cout<<" the net salary is "<<net_salary<<endl;

    return 0;
}
