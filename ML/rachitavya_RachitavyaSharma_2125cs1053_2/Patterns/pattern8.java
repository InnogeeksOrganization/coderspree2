import java.util.*;
public class pattern8
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            for(int x=1;x<=n;x++)
            {
                if((i+x)==(n+1))
                System.out.print("*");
                else
                System.out.print("\t");
            }
            
            System.out.println();
        }

        sc.close();
    }
}
