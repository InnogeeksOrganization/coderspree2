import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
  
       // write ur code here
       int n,i,j,c=0;
       int t=scn.nextInt();
       for(i=0;i<t;i++)
       {
           n=scn.nextInt();
           for(j=2;j<n;j++)
           {
               if(n%j==0)
                c++;
           }
           if(c!=0)
            System.out.println("not prime");
           else
            System.out.println("prime");
            c=0;
            
       }
  
   }
  }