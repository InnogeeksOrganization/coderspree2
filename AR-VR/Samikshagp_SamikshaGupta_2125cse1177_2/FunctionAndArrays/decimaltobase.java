import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int dn = getValueInBase(n, b);
      System.out.println(dn);
   }
  
   public static int getValueInBase(int n, int b){
       int divisor=0;
       int dividend=0;
       int quotient=1;
       int remainder=0;
       int p=0;
       int a[]=new int[20];
       divisor=b;
       dividend=n;
       
       while(quotient!=0)
       {
           quotient=dividend/divisor;
           remainer=n%b;
           a[p++]=remainder;
           dividend=quotient;
           
       }
       for(int i=p-1;i>=0;i--)
       {
           System.out.println(a[i]);
       }
       
       // write code here
   }
  }