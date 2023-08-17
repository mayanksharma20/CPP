#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={5,7,3,11,21,45,-4,55,77,43};
    cout<<"Enter the element ";
    int key;
    cin>>key;

    bool found=search(arr,10,key);
    if(found){
        cout<<"Key is Present"<<endl;
    }
    else{
        cout<<"Key is Absent"<<endl;
    }

}