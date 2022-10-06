import java.util.*;
  
  public class Main{
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
  int t=scn.nextInt();
     while(t>0)
     {
          int n=scn.nextInt();
          int c=0;
         for(int i=2;i<=n/2;i++)
         {
             if(n%i==0)
             {
                 c++;
                 break;
             }
         }
         if(c!=0)
         {
             System.out.println("not prime");
         }
         else
         {
             System.out.println("prime");
         }
         t--;
     }
   }
  }