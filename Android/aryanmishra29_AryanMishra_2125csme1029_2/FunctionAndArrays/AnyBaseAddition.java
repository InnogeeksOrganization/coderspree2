import java.util.*;
  
  public class AnyBaseAddition{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int b = scn.nextInt();
      int n1 = scn.nextInt();
      int n2 = scn.nextInt();
  
      int d = getSum(b, n1, n2);
      System.out.println(d);
   }
  
   public static int getSum(int b, int n1, int n2){
       // write ur code here
       int x=0,y=0;
       int p=1,q=1;
       while(n1>0){
           int d = n1%10;
           x+=d*p;
           p*=b;
           n1/=10;
       }
       while(n2>0){
           int d = n2%10;
           y+=d*q;
           q*=b;
           n2/=10;
       }
       int sum = x+y;
       int z=0,r=1;
       while(sum>0){
           int d=sum%b;
           z+=r*d;
           r*=10;
           sum/=b;
       }
       return z;
   }
  }