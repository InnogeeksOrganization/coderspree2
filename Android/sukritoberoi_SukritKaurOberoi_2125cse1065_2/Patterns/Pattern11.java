import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n,i,j,c=1;
    n=scn.nextInt();
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            System.out.print(c+"\t");
            c++;
        }
        System.out.println();
    }


    // write ur code here

  }
}