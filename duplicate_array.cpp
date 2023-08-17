#include<iostream>
using namespace std;

void duplicate(int arr[],int n){
    int a,i,j;
    int count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){           
                    cout<<arr[i]<<" ";
                    count++;                
            }
            
        }
        
    }
    
    cout<<" Duplicate for "<<count<<" times "<<endl;
    
}
/*
void duplicate(int arr[],int copy[],int n){
    int a,i,j;
    int count=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==copy[j]){
                if(i==j){}

                else{
                    cout<<arr[j]<<" ";
                    count++;
                    
                }
            }
            
        }
        
    }
    cout<<" Duplicate for "<<count<<" times "<<endl;
    
}
*/
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        //cout<<i<<" "<<n<<endl;

    }
    cout<<endl;
}

int main(){
int array[100]={1,2,2,1,1,5};
int n=6;
cout<<"Array is "<<endl;
printArray(array,n);

//int copy[100];
//for(int i=0;i<n;i++){
//    copy[i]=array[i];
//}
//cout<<"copy done "<<endl;
//printArray(copy,n);
cout<<endl;
//duplicate(array,copy,n);
duplicate(array,n);
return 0;
}