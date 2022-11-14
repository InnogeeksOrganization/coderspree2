import java.util.*;

public class Pattern3 {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        
        for(int x=1;x<=n;x++)
        {
            for(int y=n-1;y>=x;y--)
            System.out.print("\t");
            for(int y=1;y<=x;y++)
            System.out.print("*\t");
            
            System.out.println();
        }
        sc.close();
    }
}