import java.util.*;
  
  public class baseToBase{
  
 public static int toBase(int n, int b){
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
  
  public static int toDec(int n, int b){
       // write code here
       int d,ans=0,c=0;
       while(n>0)
       {
           d=n%10;
           n/=10;
           ans+=d*Math.pow(b,c++);
       }
       return ans;
   }
 
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int sourceBase = scn.nextInt();
     int  destBase= scn.nextInt();
     System.out.print(toBase(toDec(n,sourceBase),destBase));
   }   
  }
