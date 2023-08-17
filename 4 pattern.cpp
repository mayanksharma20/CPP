#include<iostream>
using namespace std;
int main()
{
    /*
    int n;
    cout<<"Enter_";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

   /*
   int n;
   cout<<"Enter_";
   cin>>n;                          //output
   int i=1;                         //1 1 1 1
   while(i<=n)                      //2 2 2 2
   {                                //3 3 3 3
        int j=1;                    //4 4 4 4 
        while(j<=n)
        {
            cout<<i<<" ";
            j++;    
        }
         cout<<endl;
    i++;
   }
   return 0;
   */
  
  /*
  int n;

  cout<<"read_";
  cin>>n;

  int i=1;
  while (i<=n)
  {
    int j=1;
    while (j<=n)
    {
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
  }
  */
    /*
    int n;
    cout<<"read_";
    cin>>n;
    int i=1;
    while(i<=n)
        {  
        int j=1;
        while(j<=n)
        {
        cout<<n-j+1<<" ";
        j++;
        }
    cout<<endl;
    i++;
    }
    */

   /*
    int n;
    cout<<"Read_";
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {   
        int j=1;
        while(j<=n)
        {
          cout<<count<<" ";
          count=count+1;
          j++;
        }
        cout<<endl;
        i++;

    }
    */
   
   /*
   int n;
   cout<<"Read_";
   cin>>n;
   int i=1,j;

   while(i<=n)
   {
        int j=1;
        while(j<=(n-i))
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
   }
   */
    /*
    int n;
    cout<<"Read_";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    */

   /*
   int n;
   cout<<"Read_";
   cin>>n;
   int row=1;
   int count=0;
   while (row<=n)
   {
        int col=1;
        while (col<=row)
        {
            count=count+1;
            cout<<count<<" ";
            col++;     
        }
        cout<<endl;
        row++;
   }
   */
    /*
    int n;
    cout<<"Read_";
    cin>>n;
    int row=1;
    
    while(row<=n)
    {
        
        int count=0;
        int col=1;
        count=row;
        while(col<=row)
        {
            
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    */
   /*
    int n;
    cout<<"Read_";
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int count=0;
        int col=1;
        count=row;
        while(col<=row)
        {
            
            cout<<count<<" ";
            count--;
            col++;
        }
        cout<<endl;
        row++;
    }
    */
     /*
         int i=0;
         int n;
         cin>>n;
         while(i<n)
         {
        char ch='A'+i;
        cout<<ch;
        i++;
         }
     */

    /*
    int n;
    cout<<"Read_";
    cin>>n;
    int i=1;
        while(i<=n)
        {
        int j=1;
        while(j<=n)
        {
            char ch='A'+j-1;
            cout<<ch<<" ";
            j++;
       }
        cout<<endl;
       i++;
    } 
      */   

     /*
     int n;
    cout<<"Read_";
    cin>>n;
    int i=1;
    char ch='A';
        while(i<=n)
        {
            int j=1;
            while(j<=n)
            {
            
            cout<<ch<<" ";
            j++;
            ch++;           
            }
            cout<<endl;
            i++;
        }    
        
        
       int n;
       cout<<"REad_";
       cin>>n;
       int i=1;
       while(i<=n)
       {
            int j=1;
            while(j<=n);
            {
                //char ch='A';
               // cout<<ch;
                cout<<i<<" "<<j<<n;
                //ch=ch+1;
                j++;
            }
            cout<<endl;
            i++;
            
       }
       


      int n;
      cout<<"Read_";
      cin>>n;
      int i=1;
      while(i<=n)
      {
            int j=1;
            char start='A'+n-i;
            while (j<=i)
            {
                cout<<start;
                start++;
                j++;
            }
            cout<<endl;
            i++;
      }
      

     int n;
     cout<<"Read_";
     cin>>n;
     int i=1;
     while(i<=n)
     {
        int space=n-i;
        while(space)
            {
            cout<<" ";
            space--;
            }
            
            int j=1;
            while(j<=i)
            {
                 cout<<"*";
                j++;
            }
        
            cout<<endl;
            i++;
     }
    

    int n;
    cout<<"REad_";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        int a=n-i+1;
        while(j<=a)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
     


    int n;
    cout<<"Read_";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char space=i-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        
        int start=n-i+1;
        while(j<=start)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    
    int n;
    cout<<"Read_";
    cin>>n;
    int i=1;
    while(i<=n)
    {
            char space=i-1;
            while (space)
            {
                    cout<<" ";
                    space--;
            }
            int j=1;
            int start=n-i+1;
            while(j<=start)
            {
                cout<<i;
                j++;
            }
            cout<<endl;
            i++;
            
    }
    
    
    int n;
    cout<<"Read_";
    cin>>n;
    int i=1;
    while(i<=n)
    {
            char space=n-i;
            while (space)
            {
                    cout<<" ";
                    space--;

            }
            
            int j=1;
            int start=i;
            while(j<=start)
            {
                cout<<i;
                j++;
            }
            cout<<endl;
            i++;
            
    }
    
   
   int n;
   cout<<"Read_";
   cin>>n;
   int i=1;
   while(i<=n)
    {
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        int start=n-i+1;
        while(j<=start)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    

   int n;
   cout<<"Read_";
   cin>>n;
   int i=1;
   
   
   
   while(i<=n)
   {    //to print space
        char space=n-i;
        while(space)
            {
                cout<<" ";
                space--;
            }
        
        int j=1;
        // to print 1st triangle
        while(j<=i)
            {
                cout<<j;
                j++;
            }
        // to print 2nd triangle
        int start=i-1;
        while(start)
            {
                cout<<start;
                start--;
            }
        
    
        cout<<endl;
        i++;
   }
    */

   /*
  int n;
  cout<<"Read_";
  cin>>n;
  int i=1;
  while(i<=n)
    {   
        //1st triangle
        int j=1;
        int start=n-i+1;
        while(j<=start)
            {
                cout<<j<<" ";
                j++;
            }

        //2nd triangle
        int second=(j-(n-1));
        while(second<=i)
        {
            cout<<"* ";
            second++;
        }

       
        //3rd

        int third=n-i+1;
        while(third)
            {
                cout<<third<<" ";
                third--;
            }
           
           // Read_8
    //1 2 3 4 5 6 7 8 8 7 6 5 4 3 2 1
    //1 2 3 4 5 6 7 * * 7 6 5 4 3 2 1
    //1 2 3 4 5 6 * * * * 6 5 4 3 2 1
    //1 2 3 4 5 * * * * * * 5 4 3 2 1
    //1 2 3 4 * * * * * * * * 4 3 2 1
    //1 2 3 * * * * * * * * * * 3 2 1
    //1 2 * * * * * * * * * * * * 2 1
    //1 * * * * * * * * * * * * * * 1
        
    cout<<endl;
    i++;
    
    }   
    */

 
  




}