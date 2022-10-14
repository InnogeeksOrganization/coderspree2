package coderspear;
import java.util.*;
public class CountDigitInaNumber {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d=0;
        while (n>0) {
            d++;  
            n=n/10;
        }
         System.out.println(d);
        sc.close();
    }
}