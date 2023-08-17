#include<iostream>
using namespace std;
int main()
{
    int n,i,rev=0,rem;
    cout<<"enter any number__";
    cin>>n;
    int x=n;
    while(x>0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if(n==rev)
        cout<<"palindrome";
        else
        cout<<"NOT palindrome";
    return 0;

}