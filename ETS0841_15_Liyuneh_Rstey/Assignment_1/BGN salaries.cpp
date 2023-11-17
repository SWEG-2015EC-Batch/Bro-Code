// print grossSalary, netSalary, bonusPayment

#include<iostream>
using namespace std;
int main()
{
     const double TaxRate=0.15;
    const double PensionRate=0.05;
    double baseSalary;
    double weeklyWorkingHour;
    double bonusRatePerHour;
    cout<<"calculating  salaries \n";
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
    cout<<"bonus payment= $"<<bonusPayment<<endl<<"grossSalary= $"<<grossSalary<<endl<<"taxPayment= $"<<taxPayment<<endl<<"pensionPayment= $"<<pensionPayment<<endl<<"netsalary= $"<<netSalary;
    return 0;
    
}