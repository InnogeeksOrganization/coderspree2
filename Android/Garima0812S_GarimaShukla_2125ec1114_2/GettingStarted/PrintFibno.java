import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      // write your code here
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      int a=0,b=1;
      System.out.println(a);
      System.out.println(b);
      int c=0;
      for(int i=3;i<=n;i++)
      {
        System.out.println(a+b);
        c=b;
        b=(a+b);
        a=c;
      }
   }
  }