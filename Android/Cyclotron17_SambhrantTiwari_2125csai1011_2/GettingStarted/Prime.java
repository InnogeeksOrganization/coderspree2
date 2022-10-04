import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      int n,t,i,j,k,c=0;
      Scanner scn = new Scanner(System.in);
      t=scn.nextInt();
      
  
       // write ur code here
       for(i=1;i<=t;i++)
       {
             c=0;
             n=scn.nextInt();
             for(j=1;j<=n;j++)
             {
                 if(n%j==0)
                 {
                    c++; 
                 }
               
             }
             if(c==2)
             {
                System.out.println("prime");
             }
             else
               System.out.println("not prime");

             

       }
  
   }
  }