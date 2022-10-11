import java.util.Scanner;
   
   public class Main{
   
   public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       while(n!=0)
       {
           int d=n%10;
           n = n / 10;
           System.out.println(d);
       }
     // write your code here  
    }
   }