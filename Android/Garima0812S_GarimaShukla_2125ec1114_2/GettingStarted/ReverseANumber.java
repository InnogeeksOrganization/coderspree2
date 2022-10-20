import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
     // write your code here  
      Scanner sc=new Scanner(System.in);
          int n=sc.nextInt();
          int c=0;
          while(n>0)
          {
              c=n%10;
              System.out.println(c);
              n=n/10;
          }

    }
   }