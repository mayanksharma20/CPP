#include<iostream>
using namespace std;

void printArray(int crr[],int n){
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
}

int intersection(int x[],int y[],int ans[],int n){
    cout<<"start of intersection"<<endl;
    int i;
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x[i]==y[j]){
                     ans[i]=x[i];                     
                     cout<<x[i]<<" ";
            }
        }
    }
    
    cout<<endl<<"End of intersection function"<<endl<<endl;
    printArray(ans,n);
}

int main(){
    int a[100]={1,2,3,4};
    int b[100]={2,3,6,8};
    int answer[100];
    
    cout<<endl;
    printArray(a,4);
    printArray(b,4);
    cout<<"intersection function call"<<endl;
    intersection(a,b,answer,4);
    //printArray(answer,4);

}