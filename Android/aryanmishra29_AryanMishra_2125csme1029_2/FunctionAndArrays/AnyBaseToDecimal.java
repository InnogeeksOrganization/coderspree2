import java.util.*;
  
  public class AnyBaseToDecimal{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int d = getValueIndecimal(n, b);
      System.out.println(d);
   }
  
   public static int getValueIndecimal(int n, int b){
      // write your code here
      int p=1;
      int x=0;
      while(n>0){
          int d=n%10;
          x+=p*d;
          p*=b;
          n/=10;
      }
      return x;
   }
  }