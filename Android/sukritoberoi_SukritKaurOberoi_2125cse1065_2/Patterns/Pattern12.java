import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n,i,j,a=0,b=1,c;
        n=scn.nextInt();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print(a+"\t");
                c=a+b;
                a=b;
                b=c;
            }
            System.out.println();
        }

        // write ur code here

    }
}