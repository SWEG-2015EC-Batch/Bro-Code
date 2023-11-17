// p;rint  the  distance travelled by a tank

#include<iostream>
using namespace std;
int main()
{
    double capacityInGallon;
    double milesPerGallon;
    cout<<"Enter the capacity in gallon:\n";
    cin>>capacityInGallon;
    cout<<"Enetr the miles per gallon: \n";
    cin>>milesPerGallon;
    double distanceInMiles= milesPerGallon*capacityInGallon;
    cout<<"the total distance in miles is "<<distanceInMiles<<endl;
    return 0;
}