#include<iostream>
using namespace std;

/*
//using SWAP method
void reverse(int drr[],int m){
    int start=0;
    int end=m-1;

    while(start<=end){
        swap(drr[start],drr[end]);
        start++;
        end--;
    }
}

void printArray(int crr[],int n){
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[6]={2,4,6,8,10,12};
    int brr[5]={1,3,5,7,9};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);
}
*/

void printArray(int crr[],int n){
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
}


int Reverse(int trr[],int rev[],int m){
    
    int end=m-1;
    for(int i=0;i<m;i++){
        rev[end]=trr[i];
        end--;
    }
    
    cout<<"Reverse done"<<endl;
    return rev[100];
    cout<<"Reverse returned to main"<<endl;
}
int main(){
    
    int size;
    cin>>size;
    //int n=size-1;
    
    int i;
    int array[100]; 
    int rev[100];                  //array declaration
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"input taken"<<endl;

    Reverse(array,rev,size);
    cout<<"Print function call"<<endl;
    printArray(rev,size);
    cout<<"Reverse printed"<<endl;
}
    

