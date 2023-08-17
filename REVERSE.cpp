#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0,rem;
    int d=0,id;
    while(n!=0){
        rem=n%10;
        if(d==0){
            id=rem;
        }
        if(rem==0 && id==0)
        cout<<rem;
        rev=(rev*10)+rem;
        n=n/10;
        d++;
    }
    cout<<rev;
}