import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n=scn.nextInt();
        for(int i=1;i<=n;i++)
        {
            for(int y=n-1;y>=i;y--)
            {
                System.out.print(" ");
            }
            for(int z=1;z<=i;z++)
            {
                System.out.print("*");
            }
            System.out.println();
        }

    }
}