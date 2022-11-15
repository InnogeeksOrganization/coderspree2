package coderspear.pattern;
import java.util.*;
public class Pattern13 {
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        for(int i=0;i<n;i++){
            for (int j = 0; j <= i; j++) {
                int m = fact(i)/(fact(j) * fact(i-j));
                System.out.print(m+"\t");
            }
            System.out.println();
        }
        scn.close();

    }
    public static int fact(int n){
        int f = 1;
        if(n==0){
            return 1;
        }
        for(int i=1;i<=n;i++){
            f = f*i;
        }
        return f;
    }
    
}