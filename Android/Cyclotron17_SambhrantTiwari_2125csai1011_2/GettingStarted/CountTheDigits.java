import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
    // write your code here  
    Scanner sc=new Scanner(System.in);
    int m;
      int n=sc.nextInt();
      int j=n;
      int c=0;
      while(j>0)
      {
        c++;
        m=j%10; 
        j=j/10;
      }
      System.out.println(c);
  }
  }