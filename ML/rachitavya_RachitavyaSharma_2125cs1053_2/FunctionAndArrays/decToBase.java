import java.util.*;
  
  public class decToBase{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int dn = getValueInBase(n, b);
      System.out.println(dn);
   }
  
   public static int getValueInBase(int n, int b){
       // write code here
       int d,ans=0,c=0;
       while(n>0)
       {
           d=n%b;
           n/=b;
           ans+=d*Math.pow(10,c++);
       }
       return ans;
   }
  }
