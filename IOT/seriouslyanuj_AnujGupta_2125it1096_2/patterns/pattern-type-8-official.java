import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=n;i>0;i--)
        {
            for(int j=0;j<i-1;j++)
            {
                System.out.print("\t");
            }
            System.out.println("*");
        }

        // write ur code here

    }
}