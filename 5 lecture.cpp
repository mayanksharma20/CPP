#include<iostream>
using namespace std;
int main()
{
    /*
    //left and right shift
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;
    cout<<(21<<2)<<endl;
    
    
    // pre/post increment/decrement
    int i=8;
    cout<<i <<--i <<i<<endl;  // 8 7 7
    cout<<i <<++i <<i<<endl;  // 7 8 8
    cout<<i <<i-- <<i<<endl;  // 8 8 7
    cout<<i <<i++ <<i<<endl;  // 7 7 8
    
    //que
    int a,b=1;
    a=10;
    if(++a)
    cout<<b;
    else
     cout<<++b;

    //que
    int a=1;
    int b=2;
    if(a-->0 && ++b>2)
    cout<<"1"<<endl;
    else
    cout<<"2"<<endl;
    cout<<a<<" "<<b<<endl;

    //que
    int a=1;
    int b=2;
    if(a-->0 || ++b>2)
    cout<<"1"<<endl;
    else
    cout<<"2"<<endl;
    cout<<a<<" "<<b<<endl;
    
    //que
    int n=3;
    cout<<(25*(++n));
    
    //que
    int a=1;
    int b=a++; //1  2
    int c=++a; //3
    cout<<b<<endl;
    cout<<c;

   
    int n;
    cout<<"Read_";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
        {
                sum+=i;
                cout<<i<<" "<<sum<<endl;

        }
        cout<<endl<<sum;
        

        //fibonacci series
        // 0 1 1 2 3 5 8 

        int n;
        cout<<"read_";
        cin>>n;
        int a=0;
        int b=1;
        cout<<a<<" "<<b<<" ";
        for(int i=1;i<=n;i++)
            {
            int next=a+b;
            cout<<next<<" ";
            a=b;
            b=next;
            }
        

       //prime number;
        int n;
        cout<<"REad_";
        cin>>n;
        bool isprime=1;
        for (int i = 2; i < n; i++)
            {
            if(n%i==0)
            isprime=0;
            break;
            }
        if(isprime==0)
        cout<<"NOT prime";
        else
        cout<<"Prime";
       
       for(int i=0;i<=5;i++)   //   2 4 5  
            {
                cout<<i<<" "; //0   2 4 
                i++;          //1   3 5    
            }

        

        for(int i=0;i<=5;i--)   //   0 0 0  
            {
                cout<<i<<" "; //0   0 0 
                i++;          //1   1 1    
            }
             

            //que
        for (int i = 0; i <=15; i+=2)
            {
                cout<<i<<" ";
                if(i&1)
                {
                continue;
                }
                i++;
            }
          
          
        //que
         for(int i=0;i<5;i++)
            {
                for(int j=1;j<=5;j++)
                    {
                        cout<<i<<" "<<j<<endl;
                    }
            }
            
           
           for(int i=0;i<10;i++){
                for(int j=i;j<=10;j++){
                     if(i+j==10){
                        break;
                     }   
                        cout<<i<<" "<<j<<endl;
                }
            }
            
       
       
        int n;
        cout<<"read_";
        cin>>n;
        int product=1;
        int sum=0;
        while(n!=0){ 
            int digit=n%10;
            product=product*digit;
            sum=sum+digit;
            n=n/10;
        }   
        
        cout<<product<<endl;
        cout<<sum<<endl;
        int sub=product-sum;
        cout<<sub<<endl;
        
         
        int n;
        cin>>n;
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        cout<<count<<endl;
        

       int n;
       cout<<"Enter_";
       cin>>n;
       int x=n;
       int cnt=0;
       int i=1;
       while(i<=x){
            if(x%i==0)
            cnt++;
            i++;
       }

       if(cnt==2)
       cout<<"Prime";
       else 
       cout<<"not a prime";
       */
        
        
        
        
        
        
        
        
           
        
        
}
                    























