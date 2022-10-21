import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int i,j,n;
        n=scn.nextInt();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i-1;j++)
             System.out.print("\t");
            for(j=1;j<=n-i+1;j++)
             System.out.print("*\t");
            System.out.println();
        }

    }
}
