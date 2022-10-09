import java.util.*;

public class Pattern_18 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        for(int i=0;i<=n/2;i++){
            if(i==n/2){
                for(int j=0;j<n/2;j++) System.out.print("\t");
                System.out.print("*\t");
            }
            else{
                if(i==0){
                    for(int j=0;j<n;j++) System.out.print("*\t");
                }
                else{
                    for(int j=0;j<i;j++) System.out.print("\t");
                    System.out.print("*\t");
                    for(int j=0;j<n-2*(i+1);j++) System.out.print("\t");
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
        for(int i=n/2-1;i>=0;i--){
            for(int j=0;j<i;j++) System.out.print("\t");
            for(int j=0;j<n-(2*i);j++) System.out.print("*\t");
            System.out.println();
        }
        // write ur code here

    }
}