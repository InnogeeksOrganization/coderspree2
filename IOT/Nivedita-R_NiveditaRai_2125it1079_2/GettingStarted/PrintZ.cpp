
#include <iostream>

using namespace std;

int main()
{
   int i,j,k;
   for(i=0;i<5;i++)
   {
       for(j=4;j>=0;j--)
       {
           if(i==0 || i==4)
           cout<<"*";
           else
           {
               if(i==j)
              cout<<"*";
               else 
               cout<<" ";
           }
          
       }
         cout<<endl;
   }

    return 0;
}

