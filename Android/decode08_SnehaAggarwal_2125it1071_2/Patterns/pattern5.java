import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
    
       for(int i=0; i<n; i++)
    {
        for(int j=0; j<Math.abs(n/2-i); j++)
        {
           System.out.print("\t");
        }
        for(int k=0; k<n-2*Math.abs(n/2-i); k++)
        {
             System.out.print("*\t");
        }
         System.out.print("\n");
    }

    }
}