#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    /*
    int one=0;
    int two=1;
    int m=0;
    while(two<=n){
        swap(arr[one],arr[two]);
        //cout<<"inside swap"<<arr[one]<<" "<<arr[two]<<" ";
        one=one+2;
        two++;
        two++;
        m++;
    }
    cout<<"Array swaping done "<<endl;
    */
    int i=0;
    int m=0;
    while(i+1<n){
        swap(arr[i],arr[i+1]);
        i=i+2;
        m++;
    }
    cout<<"Array swaping done "<<endl;
}

void printArray(int crr[],int n){
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int array[10]={1,2,3,4,5,6};
    int size=6;
    //cin>>size;
    cout<<"Actual array is "<<endl;
    printArray(array,size); 
    swapAlternate(array,size);
    cout<<"Array after Alternate Swaping "<<endl;
    printArray(array,size);
} 