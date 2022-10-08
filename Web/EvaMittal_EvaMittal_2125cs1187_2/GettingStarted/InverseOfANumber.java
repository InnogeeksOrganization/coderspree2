import java.util.*;
public class InverseOfANumber {
    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        int m, k=1,d=0;
        while (n > 0)
        {
             m=n%10;
             d=d+k*(int)Math.pow(10,m-1);
             n=n/10;
             k++;
        }
        System.out.println(d);
      }
}