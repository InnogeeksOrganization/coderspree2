import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // write ur code here
        int n=sc.nextInt();
        for(int i=n;i>0;i--)
        {
            for(int j=0;j<i;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }

    }
}