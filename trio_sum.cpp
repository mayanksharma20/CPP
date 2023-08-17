#include<iostream>
using namespace std;

int trioSum(int arr[],int sum[],int n){
    cout<<"inside trio sum."<<endl;
    int i=0;
    int j=1;
    int k=2;
    int m=0;
    while(i<n){
        sum[m]=arr[i]+arr[j]+arr[k];
        i=i+3;
        j=j+3;
        k=k+3;
        m++;  
    }
    cout<<"end of  trio sum."<<endl;
    return sum[m];
    
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int array[100]={1,2,3,4,5,6,7,8,9,10,11,12};
    int sum[100];
    int size=12;
    printArray(array,size);
    trioSum(array,sum,size);
    cout<<"Sum of trio is_"<<endl;
    printArray(sum,size/3);
}