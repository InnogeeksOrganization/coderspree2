import java.util.*;

public class Pattern_20 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0||j==n-1) System.out.print("*\t");
                else if(i>=n/2&&(i==j||i+j==n-1)) System.out.print("*\t");
                else System.out.print("\t");
            }
            System.out.println();
        }
    }
}