import java.util.*;

public class Pattern_15 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        for(int i=1;i<=n/2+1;i++){
            for(int j=1;j<=n/2+1-i;j++)System.out.print("\t");
            int x=i;
            for(int j=1;j<=i;j++) System.out.print(x++ +"\t");
            x--;
            for(int j=i;j>1;j--)System.out.print(--x + "\t");
            System.out.println();
        }
        for(int i=n/2;i>0;--i){
            for(int j=1;j<=n/2+1-i;j++)System.out.print("\t");
            int x=i;
            for(int j=1;j<=i;j++) System.out.print(x++ +"\t");
            x--;
            for(int j=i;j>1;j--)System.out.print(--x + "\t");
            System.out.println();
        }
        // write ur code here

    }
}