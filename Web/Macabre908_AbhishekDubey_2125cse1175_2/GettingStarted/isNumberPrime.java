import java.util.*;

public class isNumberPrime {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int x = 1; x <= t; x++){
            int n = sc.nextInt();
            int count = 1;
            for(int i = 1; i <= n / 2; i++){
                if(n % i == 0)
                count++;
            }

            if(count == 2)
            System.out.println("prime");
            else
            System.out.println("not prime");
        }

        sc.close();
    }
}
