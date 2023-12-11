#include<iostream>
using namespace std;
int main(){
    int condition = 1;
    int a;
    while(condition == 1){
        cout<<"********************************************************\n";
        cout<<"***                                                  ***\n";
        cout<<"***                                                  ***\n";
        cout<<"***       1. full rectangle pattern                  ***\n";
        cout<<"***       2. hollolw rectangle pattern               ***\n";
        cout<<"***       3. half pyramid pattern                    ***\n";
        cout<<"***       4. upside-down half pyramid pattern        ***\n";
        cout<<"***       5. hollow inverted half pyramid pattern    ***\n";
        cout<<"***       6. full pyramid pattern                    ***\n";
        cout<<"***       7. inverted full pyramid pattern           ***\n";
        cout<<"***       8. hollow inverted full pyramid pattern    ***\n";
        cout<<"***       0. exit                                    ***\n";
        cout<<"***                                                  ***\n";
        cout<<"***                                                  ***\n";
        cout<<"***                                                  ***\n";
        cout<<"********************************************************\n";
        cout<<"===>";

        cin>>a;
        switch (a)
        {
        case 0:
            condition = 2;
            cout<<"good bye (^~^)\n";
            break;
        case 1:
            cout<<"*************************************\n";
            cout<<"***     1.character               ***\n";
            cout<<"***     2.number                  ***\n";
            cout<<"***     3.asterix                 ***\n";
            cout<<"***     4.main menu               ***\n";
            cout<<"*************************************\n";
            cout<<"=====>";
            int input;
            cin>>input;
            switch (input)
            {
            case 4:
                break;
            case 3:
                int row,column;
                cout<<"row =>";
                cin>>row;
                cout<<"column =>";
                cin>>column;
                cout<<"\n\n";
                for (int i=1;i<=row;i++){
                    for (int j=1;j<=column;j++){
                        cout<<"*";
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            case 2:
                cout<<"row =>";
                cin>>row;
                cout<<"column =>";
                cin>>column;
                cout<<"\n\n";
                for (int i=1;i<=row;i++){
                    for (int j=1;j<=column;j++){
                        cout<<j;
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            case 1:
                cout<<"row =>";
                cin>>row;
                cout<<"column =>";
                cin>>column;
                cout<<"\n\n";
                for (int i=0;i<row;i++){
                    for (int j=0;j<column;j++){
                        cout<<char('a' + j);
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            
            default:
                cout<<"invalid input\n";
                break;
            }
            break;
        case 3:
            cout<<"*************************************\n";
            cout<<"***     1.character               ***\n";
            cout<<"***     2.number                  ***\n";
            cout<<"***     3.asterix                 ***\n";
            cout<<"***     4.main menu               ***\n";
            cout<<"*************************************\n";
            cout<<"=====>";
            cin>>input;
            switch (input)
            {
            case 4:
                break;
            case 3:
                int row,column;
                cout<<"row =>";
                cin>>row;
                cout<<"\n\n";
                for (int i=1;i<=row;i++){
                    for (int j=1;j<=i;j++){
                        cout<<"*";
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            case 2:
                cout<<"row =>";
                cin>>row;
                cout<<"\n\n";
                for (int i=1;i<=row;i++){
                    for (int j=1;j<=i;j++){
                        cout<<j;
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            case 1:
                cout<<"row =>";
                cin>>row;
                cout<<"\n\n";
                for (int i=0;i<row;i++){
                    for (int j=0;j<i;j++){
                        cout<<char('a' + j);
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            
            default:
                cout<<"invalid input\n";
                break;
            }
            break;
        case 4:
            cout<<"*************************************\n";
            cout<<"***     1.character               ***\n";
            cout<<"***     2.number                  ***\n";
            cout<<"***     3.asterix                 ***\n";
            cout<<"***     4.main menu               ***\n";
            cout<<"*************************************\n";
            cout<<"=====>";
            cin>>input;
            switch (input)
            {
            case 4:
                break;
            case 3:
                int row,column;
                cout<<"row =>";
                cin>>row;
                cout<<"\n\n";
                for (int i=row;i>=1;i--){
                    for (int j=1;j<=i;j++){
                        cout<<"* ";
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            case 2:
                cout<<"row =>";
                cin>>row;
                cout<<"\n\n";
                for (int i=row;i>=1;i--){
                    for (int j=1;j<=i;j++){
                        cout<<j;
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            case 1:
                cout<<"row =>";
                cin>>row;
                cout<<"\n\n";
                for (int i=row;i>=0;i--){
                    for (int j=0;j<=i;j++){
                        cout<<char('a'+j);
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            
            default:
                cout<<"invalid input\n";
                break;
            }
            break;
        case 5:
            cout<<"*************************************\n";
            cout<<"***     1.asterix                 ***\n";
            cout<<"***     2.main menu               ***\n";
            cout<<"*************************************\n";
            cout<<"=====>";
            cin>>input;
            switch (input)
            {
            case 2:
                break;
            case 1:
                int row,column;
                cout<<"row =>";
                cin>>row;
                cout<<"\n\n";
                for (int i = row; i >= 1; --i) {
                    for (int j = 1; j <= row - i; ++j) {
                        cout << " ";
                    }

                    for (int j = 1; j <= 2 * i - 1; ++j) {
                        if (j == 1 || j == 2 * i - 1 || i == row) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                    }

                    cout << endl;
                }
                cout<<"\n\n";
                break;
            
            default:
                cout<<"invalid input\n";
                break;
            }
            break;
        case 2:
            cout<<"*************************************\n";
            cout<<"***     1.number                  ***\n";
            cout<<"***     2.asterix                 ***\n";
            cout<<"***     3.main menu               ***\n";
            cout<<"*************************************\n";
            cout<<"=====>";
            cin>>input;
            switch (input)
            {
            case 3:
                break;
            case 2:
                int row,column;
                cout<<"row =>";
                cin>>row;
                cout<<"column =>";
                cin>>column;
                cout<<"\n\n";
                for (int i=0;i<row;i++){
                    for (int j=0;j<column;j++){
                        if (i == 0 || i == row - 1 || j == 0 || j == column - 1) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            case 1:
                cout<<"row =>";
                cin>>row;
                cout<<"column =>";
                cin>>column;
                cout<<"\n\n";
                for (int i=0;i<row;i++){
                    for (int j=0;j<column;j++){
                         if (i == 0 || i == row - 1 || j == 0 || j == column - 1) {
                            cout <<j<<" ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout<<endl;
                }
                cout<<"\n\n";
                break;
            default:
                cout<<"invalid input\n";
                break;
            }
            break;
        
        default:
            cout<<"invalid input\n";
            break;
        }
    }
    return 0;
}