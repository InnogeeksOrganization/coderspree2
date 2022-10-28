import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int d = getValueIndecimal(n, b);
      System.out.println(d);
   }
  
   public static int getValueIndecimal(int n, int b){
      // write your code here
      int f=0;
      int p=0;
      int s=0;
      for(int i=n;i>0;i=i/10)
      {
        f=(i%10)*(int)Math.pow(2,p);
        s=s+f;
        p++;
      }
      return s;
   }
  }