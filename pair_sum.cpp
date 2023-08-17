#include<iostream>
using namespace std;
int pairSum(int arr[],int sum[],int n){
    int i=0;
    int j=i+1;
    int m=0;
    while(i<n){
        sum[m]=arr[i]+arr[j];
        
        //cout<<arr[i]<<endl;
        //cout<<arr[j]<<endl;
        i=i+2;
        j=j+2;
        m++;
    }
    return sum[m];
    
    
}

void printArray(int crr[],int n){
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int array[100]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    //cin>>size;
    int sum[100];
    printArray(array,size);
    pairSum(array,sum,size);
    printArray(sum,size/2);

}