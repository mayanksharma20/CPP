#include<iostream>
using namespace std;

    /*
    //fibonachi series
    void fib(int k){
        int i=0;
        int j=1;
        int n=1;
        int ans;

        while(n<=k){
            ans=i+j;
                if(k==(n+2)){
                    cout<<ans<<endl;
                }
            i=j;
            j=ans;
            n++;
        }
    }
    */
    /*
    int ap(int n){
        int ans=(3*n)+7;
        return ans;
    }
    */
/*  //POWER FUNCTION
    int power(int a,int b){
        int ans=1;
        for(int i=1;i<=b;i++){
        ans=ans*a;
        }
        return ans;
    }
*/
    /*
        //1->Even
        //0->odd
        bool isEven(int a){
            //odd
            if(a&1){
                return 0;
            }
            else{ //even
                return 1;
            }
        }
    
    //FACTORIAL
    int factorial(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
    //NCR
    int nCr(int n,int r){
        int num=factorial(n);
        int denom=factorial(r)*factorial(n-r);
        return num/denom;
    }
    
   void count(int n){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        
   }
   
    bool isPrime(int n){
                                                //1 prime 
        for(int i=2;i<n;i++){                   //0 not prime
            if(n%i==0)
            return 0;
        }
        return 1;
    }
    */ 

int main(){

    /*
    //CALCULATOR USING SWITCH CASE;
    cout<<"Enter values of A and B"<<endl;
    int a,b;
    cin>>a>>b;
    
    char op;
    cout<<"Enter the operation_"<<endl;
    cin>>op;
    int c;

    switch (op){
    
        case '+': c=a+b;
                  cout<<a<<"+"<<b<<"="<<c<<endl;
                  break;  

        case '-': c=a-b;
                  cout<<a<<"-"<<b<<"="<<c<<endl;
                  break; 

        case '*': c=a*b;
                  cout<<a<<"*"<<b<<"="<<c<<endl;
                  break; 

        case '/': c=a/b;
                  cout<<a<<"/"<<b<<"="<<c<<endl;
                  break; 

        case '%': c=a%b;
                  cout<<a<<"%"<<b<<"="<<c<<endl;
                  break; 

        default:cout<<"Invalid operator";
    }
    

   int n=1330;
   char ch;
   int k;
   cin>>ch;
   
   switch (ch){
        case 'h': k=n/100;
                    cout<<k<<endl;
                    break;
        case 'f':  k=(n%100);
                    if(k>=50){
                    k/50;
                    cout<<k<<endl;
                    break;
                    }
        case 't':  ((k=n%100)%50)/20;
                    cout<<k<<endl;
                    break;

        case 'o':  (((n%100)%50)%20)/10;
                    cout<<k<<endl;
                    break;                    
   
        default:    cout<<"default";
                    break;
   }
    

   //FUNCTIONS 
   // POWER FUNCTION
   int a,b;
   cin>>a>>b;
   int c=power(a,b);
   cout<<c<<endl;
   
   
    //odd even
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    
    
    //NCR
    int n,r;
    cin>>n>>r;
    cout<<"Answer is "<<nCr(n,r)<<endl;
    
    //counting 1 to n
    int n;
    cin>>n;
    count(n);
    
    //prime number
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else
        cout<<"NOT a prime"<<endl;
    

   //AP
    int n;
    cin>>n;
    int a=ap(n);
    cout<<a<<endl;
    
    
    //fibonaci series output
    int k;
    cin>>k;
    fib(k);
    */

}


