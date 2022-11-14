import java.util.*;

public class Pattern2 {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        
        for(int x=n;x>=1;x--)
        {
            for(int y=1;y<=x;y++)
            System.out.print("*\t");
            
            System.out.println();
        }
        sc.close();
    }
}