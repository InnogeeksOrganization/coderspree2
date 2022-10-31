import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=0;j<(n+1)/2-i;j++)
            {
                System.out.print("*\t");
            }
            for(int j=0;j<2*i+1;j++)
            {
                System.out.print("\t");
            }
            for(int j=0;j<(n+1)/2-i;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
        for(int i=0;i<(n-1)/2;i++)
        {
            for(int j=0;j<i+2;j++)
            {
                System.out.print("*\t");
            }
            for(int j=0;j<n-2-2*i;j++)
            {
                System.out.print("\t");
            }
            for(int j=0;j<i+2;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }

        // write ur code here

    }
}