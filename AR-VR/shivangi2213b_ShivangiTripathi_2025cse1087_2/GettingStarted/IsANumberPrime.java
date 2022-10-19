import java.util.*;
  
  public class IsANumberPrime{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
       int t=scn.nextInt();
       for(int x=1;x<=t;x++)
       {
           int n=scn.nextInt();
           if(isPrime(n)==1)
           System.out.println("prime");
           else System.out.println("not prime");
           
       }
       scn.close();
   }
   public static int isPrime(int n)
   {
       for(int x=2;x<=n/2;x++)
       {
           if(n%x==0)
           return 0;
       }
       return 1;
   }
  }