import java.util.*;

public class Pattern_10 {

    public static void main(String[] args) {
        int i;
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        for(i=0;i<=n/2;i++){
            for(int j=0;j<n/2-i;j++) System.out.print("\t");
            System.out.print("*\t");
            if(i!=0){
                for(int j=0;j<(2*i)-1;j++) System.out.print("\t");
                System.out.print("*");
            }
            System.out.println();
        }
        for(i=n/2-1;i>=0;i--){
            for(int j=0;j<n/2-i;j++) System.out.print("\t");
            System.out.print("*\t");
            if(i!=0){
                for(int j=0;j<(2*i)-1;j++) System.out.print("\t");
                System.out.print("*");
            }
            System.out.println();
        }
        // write ur code here

    }
}