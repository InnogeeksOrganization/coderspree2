import java.util.*;
public class CountDigitsInANumber {
    public static void main(String[] args) {
        // write your code here  
        Scanner sc = new Scanner(System.in);
        long n= sc.nextLong();
        sc.close();
        int d=0;
        while(n>0)
        {
            d++;
            n=n/10;
        }
        System.out.println(d);
       }
}
