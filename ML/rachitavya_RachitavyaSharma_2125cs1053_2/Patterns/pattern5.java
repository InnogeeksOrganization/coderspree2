import java.util.*;

public class pattern5 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();
      for(int i=0; i<n; i++)
    {
        for(int j=0; j<Math.abs(n/2-i); j++)
        {
            System.out.print("\t");
        }
        for(int j=0; j<n-2*Math.abs(n/2-i); j++)
        {
            System.out.print("*\t");
        }
        System.out.println();
    }
    scn.close();
    }
}
