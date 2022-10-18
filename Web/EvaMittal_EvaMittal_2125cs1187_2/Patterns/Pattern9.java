import java.util.*;
public class Pattern9 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n= scn.nextInt();
        int i,j,k;
        for(i=1,j=n;i<=n && j>=1;i++,j--)
        {
                for(k=1;k<=n;k++)
                {
                    if(k==i||k==j)
                    System.out.print("*\t");
                    else
                    System.out.print("\t");
                }
            System.out.println();
        }
    }
}
