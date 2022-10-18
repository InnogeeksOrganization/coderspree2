import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i<=n/2)
                {
                    if(j>=(n/2)-i && j<=(n/2)+i)
                        System.out.print("*\t");
                    else
                        System.out.print("\t");
                }
                else
                {
                    if(j>=i-(n/2) && j<=n-i+(n/2-1))
                        System.out.print("*\t");
                    else
                        System.out.print("\t");
                }
            }
            System.out.println();
        }


    }
}