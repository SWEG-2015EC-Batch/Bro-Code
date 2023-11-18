5->
// calculating gross salary, bonus payment, and netsalary
input-- bonusRatePerHour, weeklyWorkingHour, baseSalary, taxRate=0.15, pensionRate=0.05
operations--- bonusPayment= bonusRatePerHour*weeklyWorkingHour
              grossSalary= bonusPayment+baseSalary
              taxPayment= grossSalary*taxRate
              pensionPayment= grossSalary*pensionRate
              netSalary= grossSalary-(taxPayment+pensionPayment)
output----- bonusPayment, grossSsalary, taxPayment, pensionPayment, netSalary
pseudo code
1. start
3. taxRate= o.15, pensionRate= 0.05
4. input bonusRatePerHour, weeklyWorkingHour, baseSalary,name
5. bonusPayment= bonusRatePerHour*weeklyWorkingHour
6. grossSalary= bonusPayment+baseSalary
7. taxPayment= grossSalary*taxRate
8. pensionPayment= grossSalary*pensionRate
9. netSalary= grossSalary- (taxPayment+pensionPayment)
10. print bonusPayment, grossSalary, netSalary
11. end
flow chart
```mermaid
graph LR;
id1([Start]);
id2[/"`Input
name,
baseSalaray,
workHours,
bonusRate`"/];
id14("`taxRate = 0.15,
pensionRate = 0.05`"`);
id3("`bonus payment =
workHours * bonusRate`");
id10("`grossSalary =
baseSalary + bonusPayment`");
id11("`pensionPayment =
grossSalary * pensionRate`");
id12("`taxPayment =
grossSalary * taxRate`");
id13("`netSalary =
grossSalary -
pensionPayment -
taxPayment`");
id5[/"`Print
grossSalary,
bonusPayment,
netSalary`"/];
id6([End]);
id1-->id14;
id2-->id3;
id14-->id2;
id3-->id10;
id10-->id12;
id12-->id11;
id11-->id13;
id13-->id5;
id5-->id6;
```
