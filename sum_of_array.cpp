#include<iostream>
using namespace std;
int sum(int array[],int n){
    int add=0;
    for(int i=0;i<n;i++){
        add=add+array[i];
    }
    return add;
}

int main(){
    int size;
    cin>>size;

    int array[100];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    sum(array,size);
    cout<<"Addition is "<<sum(array,size);
}