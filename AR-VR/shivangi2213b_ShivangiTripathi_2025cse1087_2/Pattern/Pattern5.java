import java.util.*;

public class Pattern5 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        
        for(int x=1;x<=n;x++)
        {
            for(int y=1;y<=n;y++)
            {
                if(x==y)
                System.out.print("*\t");
                else System.out.print("\t");
            }
            System.out.println();
        }
        sc.close();
    }
}