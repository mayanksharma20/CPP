#include<iostream>
using namespace std;
void printArray(int array[],int size){
    cout<<endl<<"Printing arrays"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl<<"Printing End"<<endl;
}
int main(){
    
    /*
    //declare
    int number[15];
    cout<<"hello"<<endl;
    cout<<number[12]<<endl;
    */
    int n;
    int one[10]={2,4,6,8};
    n=10;
    printArray(one,10);

    int two[15]={1,3,5,7,9};
    n=15;
    printArray(two,15);
}