import java.util.*;

public class reverseANum {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
     long n = sc.nextInt();
     while(n > 0){
         long d = n % 10;
         System.out.println(d);
         n = n / 10;
     }
     sc.close();
    }
}
