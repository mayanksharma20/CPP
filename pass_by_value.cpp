#include<iostream>
using namespace std;
    
    int update(int a){
        int ans=a*a;
        return ans;
    }
    /*
    void update(int a){
        a=a/2;
    }
    
    int dummy(int n){
    n++;
    cout<<"N inside dummy is"<<n<<endl;
    n++;
    return n;
    }
    */

    int main(){
    /*
    int n=12;
    cout<<endl<<"N in main is"<<n<<endl;
    dummy(n);
    cout<<"N after function call"<<n;
    

    int a=10;
    update(a);
    cout<<a<<endl;
    */
    int a=14;
    update(a);
    cout<<a<<endl;

}