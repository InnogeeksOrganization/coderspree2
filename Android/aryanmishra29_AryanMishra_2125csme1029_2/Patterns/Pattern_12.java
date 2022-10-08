import java.util.*;

public class Pattern_12 {
    public static int fibo(int n){
        if(n==0 || n==1) return n;
        return fibo(n-1)+fibo(n-2);
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++) System.out.print(fibo(count++)+"\t");
            System.out.println();
        }
        // write ur code here

    }
}