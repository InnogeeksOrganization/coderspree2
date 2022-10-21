import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
     int n=scn.nextInt();
     if(n>=1 && n<=100)
     {
         for(int i=n;i>=1;i--)
         {
             for(int y=1;y<=i;y++)
             {
         System.out.print("* ");
             }
             System.out.println();
         }
     }
        // write ur code here

    }
}