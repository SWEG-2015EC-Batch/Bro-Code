#include<iostream>
using namespace std;
void sort( int array[],int size ){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

int main()
{
    int array[]= {0,5,2,4,3,1,6,7,9,8,11};
    int size=sizeof(array)/sizeof(array[0]);
    sort(array, size);
    for(int element: array){
        cout<<element<<" ";
    }
   
    

    return 0;
}