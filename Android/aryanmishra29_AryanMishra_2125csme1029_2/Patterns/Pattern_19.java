import java.util.*;

public class Pattern_19 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        for(int i=0;i<n;i++){
            if(i==n/2){
                for(int j=0;j<n;j++) System.out.print("*\t");
            }
            else if(i<n/2){
                for(int j=0;j<n;j++){
                    if(i==0&&j<n/2) System.out.print("*\t");
                    else if(j==n-1) System.out.print("*\t");
                    else if(j==n/2) System.out.print("*\t");
                    else System.out.print("\t");
                }
            }
            else{
                for(int j=0;j<n;j++){
                    if(i==n-1&&j>n/2) System.out.print("*\t");
                    else if(j==0) System.out.print("*\t");
                    else if(j==n/2) System.out.print("*\t");
                    else System.out.print("\t");
                }
            }
            System.out.println();
        }
    }
}