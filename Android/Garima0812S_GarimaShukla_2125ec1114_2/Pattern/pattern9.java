import java.util.*;

public class Pattern_9 {

    public static void main(String[] args) {
        int i;
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        for(i=1;i<=n/2;i++){
            for(int j=1;j<i;j++) System.out.print("\t");
            System.out.print("*\t");
            for(int j=1;j<=n-(2*i);j++) System.out.print("\t");
            System.out.println("*");
        }
        for(int j=0;j<i-1;j++) System.out.print("\t");
        System.out.println("*");
        for(i=n/2;i>0;i--){
            for(int j=1;j<i;j++) System.out.print("\t");
            System.out.print("*\t");
            for(int j=1;j<=n-(2*i);j++) System.out.print("\t");
            System.out.println("*");
        }

        // write ur code here

    }
}