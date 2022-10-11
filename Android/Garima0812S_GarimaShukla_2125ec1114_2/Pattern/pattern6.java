import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        int i,j;
        // write ur code here
        for(i=0;i<=n/2;i++)
        {
            for(j=0;j<=(n/2)-i;j++)
             System.out.print("*\t");
            for(j=1;j<=2*i+1;j++) 
             System.out.print("\t");
            for(j=0;j<=(n/2)-i;j++) 
             System.out.print("*\t");
            System.out.println();
        }
        for(i=n/2-1;i>=0;i--)
        {
            for(j=0;j<=(n/2)-i;j++) 
             System.out.print("*\t");
            for(j=1;j<=2*i+1;j++) 
             System.out.print("\t");
            for(j=0;j<=(n/2)-i;j++) 
             System.out.print("*\t");
            System.out.println();
        }

    }
}