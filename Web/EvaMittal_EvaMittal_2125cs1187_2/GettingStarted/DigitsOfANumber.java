import java.util.*;
public class DigitsOfANumber {
    public static void main(String[] args) {
        // write your code here  
         Scanner sc = new Scanner(System.in);
          long n= sc.nextLong();
          sc.close();
          int c=0;
          long t,d;
          t=n;
          while(n>0)
          {
              c++;
              n=n/10;
          }
          while(t>0)
          {
              d= t /(long) Math.pow(10,c-1);
              System.out.println(d);
              t= t % (long) Math.pow(10,c-1);
              c--;
          }
       }
}
