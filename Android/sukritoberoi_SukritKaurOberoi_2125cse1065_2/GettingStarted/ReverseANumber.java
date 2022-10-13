import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
     // write your code here  
     long n;
     Scanner sc=new Scanner(System.in);
     n=sc.nextLong();
     while(n!=0)
     {
         System.out.println(n%10);
         n=n/10;
     }
    }
   }