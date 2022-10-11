import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n,i,j;
        n=scn.nextInt();
        for(i=1;i<=n;i++)
        {
            for(j=n;j>i;j--)
            System.out.print("\t");
            System.out.print("*");
            System.out.println();
        }

        // write ur code here

    }
}