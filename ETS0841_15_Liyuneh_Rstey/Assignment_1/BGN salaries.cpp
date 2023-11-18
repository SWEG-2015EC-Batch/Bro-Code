// print grossSalary, netSalary, bonusPayment

#include<iostream>
#include<string>
using namespace std;
int main()
{
     const double TaxRate=0.15;
    const double PensionRate=0.05;
    double baseSalary;
    double weeklyWorkingHour;
    double bonusRatePerHour;
    string name;
    cout<<"calculating  salaries \n";
    cout<<"Enter the employee name \n";
    cin>>name;
    cout<<"Enter base salary: \n";
    cin>>baseSalary;
    cout<<"Enter weekkly working hour: \n";
    cin>>weeklyWorkingHour;
    cout<<"Enter bonus rate per hour: \n";
    cin>>bonusRatePerHour;

    double bonusPayment= weeklyWorkingHour* bonusRatePerHour;
    double grossSalary= bonusPayment+baseSalary;
    double taxPayment= TaxRate*grossSalary;
    double pensionPayment= PensionRate*grossSalary;
    double netSalary= grossSalary- (taxPayment+ pensionPayment);
    cout<<"the total process for  "<<name<<endl<<"bonus payment= $"<<bonusPayment<<endl<<"grossSalary= $"<<grossSalary<<endl <<"netsalary= $"<<netSalary;
    return 0;
    
}
