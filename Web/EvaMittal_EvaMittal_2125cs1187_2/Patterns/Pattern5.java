import java.util.*;
public class Pattern5 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n= scn.nextInt();
        int i,j,k;
        for(i=((n+1)/2),j=((n+1)/2);i>=1 && j<=n;i--,j++)
        {
                for(k=1;k<=n;k++)
                {
                    if(k>=i && k<=j)
                    System.out.print("*\t");
                    else
                    System.out.print("\t");
                }
            System.out.println();
        }
        for(i=2,j=n-1;i<=((n+1)/2) && j>=((n+1)/2);i++,j--)
        {
                for(k=1;k<=n;k++)
                {
                    if(k>=i && k<=j)
                    System.out.print("*\t");
                    else
                    System.out.print("\t");
                }
            System.out.println();
        }
    }
}
