import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            System.out.println();
            for(int j=0;j<n;j++)
            {
                if(i==j||(i+j)==n-1)
                {
                    System.out.print("*\t");
                }
                else
                System.out.print("\t");
            }
            //System.out.println();
        }
        

        // write ur code here

    }
}