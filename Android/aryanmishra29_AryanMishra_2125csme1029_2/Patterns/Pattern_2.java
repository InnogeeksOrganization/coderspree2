import java.util.*;

public class Pattern_2 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++) System.out.print("*\t");
            System.out.println();
        }
        // write ur code here

    }
}
