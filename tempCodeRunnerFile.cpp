#include<iostream>
using namespace std;
class person{
    public:
      string name;
      void display(){
        cout<<"your name is "<<name<<endl;
      }
};
int main()
{
    person liyuneh;
    liyuneh.name="liyuneh";
    liyuneh.display();
    
}
