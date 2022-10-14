import java.util.*;
public class DigitsOfANumber {
    public static void main(String[] args) {
        // write your code here  
         Scanner sc = new Scanner(System.in);
          int n= sc.nextInt();
          sc.close();
          int t,d,c=0;
          t=n;
          while(n>0)
          {
              c++;
              n=n/10;
          }
          while(c>=1||t>0)
          {
              d= t /(int) Math.pow(10,c-1);
              System.out.println(d);
              t= t % (int) Math.pow(10,c-1);
              c--;
            
          }
       }
}
