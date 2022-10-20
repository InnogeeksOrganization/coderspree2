import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
       int n=scn.nextInt();
       int a[][]=new int [n][n];
       for(int i=0;i<n;i++)
       {
           for(int y=0;y<n;y++)
           {
               if(i==y)
               {
                   System.out.print("*");
               }
               else
               System.out.print("\t");
           }
           System.out.println();
           
       }
        // write ur code here

    }
}