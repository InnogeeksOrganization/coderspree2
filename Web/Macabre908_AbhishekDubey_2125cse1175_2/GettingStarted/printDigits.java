import java.util.*;

public class printDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long sum = 0;
        while(n > 0){
            long d = n % 10;
            sum = sum * 10 + d;
            n = n / 10;
        }
        
        while(sum > 0){
            long x = sum % 10;
            System.out.println(x);
            sum = sum / 10;
        }
        sc.close();   
    }
}
