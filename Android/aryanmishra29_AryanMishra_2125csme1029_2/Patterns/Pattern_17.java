import java.util.*;

public class Pattern_17 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        for(int i=0;i<n;i++){
            if(i==n/2){
                for(int j=0;j<n;j++) System.out.print("*\t");
            }
            else if(i<n/2){
                for(int j=0;j<n/2;j++)System.out.print("\t");
                for(int j=0;j<=i;j++) System.out.print("*\t");
            }
            else{
                for(int j=0;j<n/2;j++)System.out.print("\t");
                for(int j=n-i;j>0;j--) System.out.print("*\t");
            }
            System.out.println();
        }
        // write ur code here

    }
}