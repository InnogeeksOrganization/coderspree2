import java.util.*;
public class Pattern4 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int i,j,k;
        for(i=1;i<=n;i++)
        {
        for(k=1;k<=i-1;k++)
        {
            System.out.print("\t");
        }
        for(j=n;j>=i;j--)
        System.out.print("*\t");
        System.out.println();
        }

    }
}
