import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
         int n=scn.nextInt();
        for(int i=n;i>=1;i--)
        {
            for(int s=n;s>i;s--)
            {
                System.out.print("\t");
            }
            for(int j=i;j>=1;j--)
            {
                System.out.print("*\t");
            }
                            System.out.println();

            

        }

    }
}