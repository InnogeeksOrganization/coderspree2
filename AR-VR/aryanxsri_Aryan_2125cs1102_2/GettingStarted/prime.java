import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
  
       // write ur code here
       int t=sc.nextInt();
       for(int x=1;x<=t;x++)
       {
           int n=sc.nextInt();
           if(isPrime(n))
           System.out.println("prime");
           else System.out.println("not prime");
           
       }
  
   }
   public static boolean isPrime(int n)
   {
       for(int x=2;x<=n/2;x++)
       {
           if(n%x==0)
           return false;
       }
       return(true);
   }
  }