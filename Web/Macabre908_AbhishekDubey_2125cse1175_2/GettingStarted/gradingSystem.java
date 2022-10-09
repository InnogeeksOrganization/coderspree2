import java.util.*;

public class gradingSystem {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int base = sc.nextInt();
        sc.close();

        int decimalN = 0;
        int pow = 0;

        while(n > 0){
            int rem = n % 10;
            decimalN += rem * Math.pow(base, pow);
            n = n / 10;
            pow++;
        }

        System.out.println(decimalN);
    }
}
