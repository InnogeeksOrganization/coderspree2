import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      // write your code here
      Scanner sc=new Scanner(System.in);
      int n,a=0,b=1,c;
      n=sc.nextInt();
      for (int i = 0; i < n; i++) 
     {
       System.out.println(a);
       c = a + b;
       a = b;
       b = c;
     }

   }
  }