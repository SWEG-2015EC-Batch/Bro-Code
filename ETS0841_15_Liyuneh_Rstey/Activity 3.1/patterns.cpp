#include<iostream>
using namespace std;
int main()
{
    int choice;
    int condition= 1;
    while(condition==1){
    cout<<"***************************************\n";
    cout<<"**   1. half pyramid                 **\n";
    cout<<"**   2. full rectangle shape         **\n";
    cout<<"**   3. inverted half pyramid        **\n";
    cout<<"**   4. fully pyramid                **\n";
    cout<<"**   5. hollow inverted half pyramid **\n";
    cout<<"**   6. inverted full pyramid        **\n";
    cout<<"**   7. hollow  rectangle            **\n";
    cout<<"**   0. exit                         **\n";
    cout<<"***************************************\n";
    cin>>choice;
    switch(choice){
        case 0:
            cout<<" see you soon! ";
            break;
        case 1:
                cout<<" Enter the symbol you want to design: ";
                char symbol;
                cin>>symbol;
                cout<<" Enter the number of rows: ";
                int rows;
                cin>>rows;
                for(int i=0; i<=rows; i++){
                    cout<<" ";
                    for(int j=0; j<=i; j++){
                        cout<<char('1' +j)<<" ";

                    }
                    cout<<endl;
            
                }
                break;
        case 2:
            cout<<"**********************\n";
            cout<<"**** 1.number       **\n";
            cout<<"**** 2. char        **\n";
            cout<<"**** 3. asterix     **\n";
            cout<<"**********************\n";
            int num;
            cin>>num;
            switch(num){
                case 1: 
                    cout<<"rows-->";
                    cin>>rows;
                    cout<<"column-->";
                    int column;
                    cin>>column;
                    cout<<"num-->";
                    cin>>num;
                     for(int i=1; i<=rows; i++){
                        for(int j=1; j<=column; j++){
                            cout<<j<<" ";
                        } 
                        num++;
                        cout<<endl;
                     }
                          break;
                     case 2: 
                        cout<<"rows-->";
                        cin>>rows;
                        cout<<"column-->";
                        cin>>column;
                        char symbol;
                        cout<<"symbol-->";
                        cin>>symbol;
                        for(int i=0; i<=rows; i++){
                        cout<<" ";
                        for(int j=0; j<=column; j++){
                            cout<<char('a' + j)<<" ";
                        } 
                        cout<<endl;}
                        break;
                    case 3: 
                        cout<<"rows-->";
                        cin>>rows;
                        cout<<"column-->";
                        cin>>column;
                        char asterix;
                        cout<<"asterix-->";
                        cin>>asterix;
                        for(int i=0; i<=rows; i++){
                          for(int j=0; j<=column; j++){
                            cout<<asterix<<" ";
                        } 
                        cout<<endl;
                     }
                     break;
            }
            break;
        case 3: 
             cout<<"rows--> ";
             cin>>rows;
             cout<<"symbols--> ";
             cin>>symbol;
             for(int i=rows; i>=0; i--){
                cout<<" ";
                for(int j=0; j<=i; j++){
                    cout<<symbol<<" ";
                }
                cout<<endl;
             }
             break;
        case 4: 
             cout<<"rows--> ";
             cin>>rows;
             cout<<"symbol-->";
             cin>>symbol;
             for(int i=0; i<=rows-1; i++){
                for(int space=1; space<=rows-i-1; space++)
                 cout<<" ";
                for(int j=0; j<=i; j++){
                    cout<<symbol<<" ";
                } 
                cout<<endl;
             }
             break;
        case 7: 
           cout<<"rows-->";
           cin>>rows;
           cout<<"column-->";
           int column;
           cin>>column;
           cout<<"symbol-->";
           cin>>symbol;
           for(int i=1; i<=rows; i++){
            cout<<" ";
            for(int j=1; j<=column; j++){
                if(i==1||i==rows||j==1||j==column){
                    cout<<"*"<<" ";
                } else{
                    cout<<" ";
                } 
            }  
            cout<<endl;
           }



           break;
        case 6:
             cout<<"rows-->";
             cin>>rows;
              for(int i=rows-1; i>=1; i--){
                for(int space=1; space<=rows-i-1; space++)
                cout<<" ";
                for(int j=1; j<=i; j++){
                    cout<<j<<" ";
                }
                cout<<endl;
              }
              break;

              
            }
           
    }
    condition++;
    }
