import java.util.*;
public class IsANumberPrime {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
    
         // write ur code here
         int t = scn.nextInt();
         int i,j,f;
         for(i=1;i<=t;i++)
         {
             f=0;
         int n= scn.nextInt();
         for(j=2;j<=n/2;j++)
         {
             if(n%j==0)
             {
                 f=1;
                 break;
             }
         }
         if(f==0)
         System.out.println("prime");
         else
         System.out.println("not prime");
         }
    
     }
}
