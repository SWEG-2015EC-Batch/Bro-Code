// a program that excutes a given pattern by using the inserted numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    char choice;


    do{
        cout<<"Select a number between 1 - 10 ->";
        cin>>n;
        if(n > 10){
            cout<<"If you enter a number greator than 10, the pattern you expected may not appear. Are you sure you want to continue (y/n)-";
            cin>>choice;

            choice = toupper(choice);

            if (choice != 'Y'){
                continue;
            }
        }else if(n < 1){
                cout<<"number have to be greator than 0\n";
                continue;
        }
        
        
        // top half
        for (int i = 0; i < n-1; i++){
            // left
            for (int j = n-2; j >= 0; j--){
                if (j <= i){
                    cout<<j<<" ";
                }
            }

            //spaces
            for (int j = n-2; j >= i; j--){
                cout<<"  ";
            }
            for (int j = n-3; j >= i; j--){
                cout<<"  ";
            }

            //right
            for (int j = 0; j <= i; j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }


        // equator
        for(int i = n-1; i >= 0; i--){
            cout<<i<<" ";
        }
        for(int i = 1; i <= n-1; i++){
            cout<<i<<" ";
        }
        cout<<endl;


        // bottom half
        for (int i = n-1; i > 0; i--){
            //left
            for (int j = n-1; j >= 0; j--){
                if (j < i){
                    cout<<j<<" ";
                }
            }

            //spaces
            for (int j = 0; j <= n-1; j++){
                if (i <= j){
                    cout<<"  ";
                }
            }
            for (int j = 1; j <= n-2; j++){
                if (i <= j){
                    cout<<"  ";
                }
            }

            //right
            for (int j = 0; j <= n-2; j++){
                if (j < i){
                    cout<<j<<" ";
                }
            }
        
        
            cout<<endl;
        
        }
    }while(n > 0);
    return 0;
}