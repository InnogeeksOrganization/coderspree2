import java.util.*;

public class fibonacciTillN {
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int n1 = 0;
        int n2 = 1;

        for(int i = 1; i <= n; i++){
            System.out.println(n1 + " ");
            int temp = n1 + n2;
            n1 = n2;
            n2 = temp;
        }

        sc.close();
        
    }
}
