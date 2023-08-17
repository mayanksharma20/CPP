/*  input will be given in a special format
    eg. 1 is no. of arrays
        7 is size of array
        2 3 2 6 3 6 2  array
    o/p 1

    eg. 2 array
        5 size
        2 4 7 2 7
        9 size 
        1 3 1 3 6 6 7 10 7 array
    o/p 4
        10
*/

#include<iostream>
using namespace std;
void unique(int arr[],int n){
    int i,j;
    int count=0;
    for(i=0;i<n;i++){
        
        for(j=i+1;j<n;j++){
            
            if(arr[i]==arr[j]){
               arr[i]=arr[i]*0;
               arr[j]=arr[j]*0;
            }         
        }        
    }
    
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            cout<<arr[i];
        }
    }
    cout<<endl;
}



int main(){
    //int t=1;
    //cout<<"Enter the number of array you want "<<endl;
    //cin>>t;
    int size=7;
    //cout<<"Enter size of array then array"<<endl;
    //cin>>size;
    int array[100]={2,3,1,1,3,6,2};
    //for(int i=0;i<size;i++){
     //   cin>>array[i];
    //}
    cout<<endl;

    unique(array,size);

}