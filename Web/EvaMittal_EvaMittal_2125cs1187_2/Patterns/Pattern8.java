import java.util.*;
public class Pattern8 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int i,k;
        for(i=1;i<=n;i++)
        {
            for(k=n-1;k>=i;k--)
            {
              System.out.print("\t");
            }
            System.out.print("*");
            System.out.println();
        }
    }
}
