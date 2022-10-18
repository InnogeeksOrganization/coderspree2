import java.util.*;

public class Pattern_16 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        for(int i=0;i<n;i++){
            int x=1;
            for(int j=0;j<=i;j++) System.out.print(x++ + "\t");
            for(int j=0;j<2*(n-i)-3;j++) System.out.print("\t");
            if(i!=n-1)
                for(int j=0;j<=i;j++) System.out.print(--x + "\t");
            else{
                x--;
                for(int j=1;j<=i;j++) System.out.print(--x + "\t");
            } 
            System.out.println();
        }
        // write ur code here

    }
}