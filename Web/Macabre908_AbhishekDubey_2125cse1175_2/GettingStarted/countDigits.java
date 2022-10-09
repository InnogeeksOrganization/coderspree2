import java.util.*;

public class countDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        int count = 0;
        while(n != 0){
            count++;
            n = n / 10;
        }
        
        System.out.println(count);
}
}
