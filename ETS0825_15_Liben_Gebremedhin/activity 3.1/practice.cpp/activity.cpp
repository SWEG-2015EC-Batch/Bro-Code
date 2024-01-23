#include <iostream>
using namespace std;

int main(){
    /*string name;
    int size;
    cout << "What's your name: ";
    cin >> name;
    cout << "How many elements: ";
    cin >> size;
    int frequency[size] = {};
    int nonFrequent[size] = {};
    int array[size] = {};
    for(int i = 0; i < size; ++i){
        cout << "Enter element number " << i + 1 << ": ";
        cin >> array[i];
    }
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            if(i != j){
                if(array[i] == array[j]){
                    frequency[i] = array[i];
                }
                else{
                    for(int i = 0; i < size; ++i){
                    }
                }
                }
            }
        }
    cout << frequency[0] << " is frequent." << endl;
    cout << nonFrequent[0] << " is non frequent" << endl; 
//2 4 6 2 4 7
//2 4 6 2 4 7

    string name;
    int size, size2, size3;
    cout << "What's your name: ";
    cin >> name;
    cout << "How many elements in array one: ";
    cin >> size;
    int array[size] = {};
    for(int i = 0; i < size; ++i){
        cout << "Enter element number " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "How many elements in array two: ";
    cin >> size2;
    int array2[size2] = {};
    for(int i = 0; i < size2; ++i){
        cout << "Enter element number " << i + 1 << ": ";
        cin >> array2[i];
    }
    cout << "How many elements in array three: ";
    cin >> size3;
    int array3[size3] = {};
    for(int i = 0; i < size3; ++i){
        cout << "Enter element number " << i + 1 << ": ";
        cin >> array3[i];
    }
    
    
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size2; ++j){
            for(int k = 0; k < size3; ++k){
                if(array[i] == array2[j] && array[i] == array3[k]){
                    cout << array[i] << endl;
                    
                }
            }
        }
    }
    cout << "are common."; */
    // 2 4 6 8 10 12
    // 1 3 4 5 7 10 11 
    // 2 4 5 6 7 8 9 10
    string name;
    int size;
    cout << "What's your name: ";
    cin >> name;
    cout << "How many elements: ";
    cin >> size;
    int frequency[size] = {};
    int nonFrequent[size] = {};
    int array[size] = {};
    for(int i = 0; i < size; ++i){
        cout << "Enter element number " << i + 1 << ": ";
        cin >> array[i];
    }
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            if(i != j){
                if(array[i] == array[j]){
                    frequency[i] = array[i];
                }    
            }
        }
    }

    
    return 0;
}