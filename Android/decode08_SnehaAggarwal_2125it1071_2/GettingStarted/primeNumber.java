import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
   int t = scn.nextInt();
 
  for(int i=1; i<=t; i++){
      int c=0;
      int n = scn.nextInt();
      for(int j=1; j<=n/2; j++){
          if(n%j==0)
          c++;
      }
      if(c==1)
      System.out.println("prime");
      else
      System.out.println("not prime");
  }
       // write ur code here
  
   }
  }
