import java.util.*;

public class Print_All_Primes_Till_N{
    public static boolean isPrime(int n){
        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int l = sc.nextInt();
        int h = sc.nextInt();
        for(int i=l;i<=h;i++){
            if(isPrime(i)) System.out.println(i);
        }
        // write your code here
    }
}
