import java.util.*;
public class pattern9
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            for(int x=1;x<=n;x++)
            {
                if((i+x)==(n+1) || i==x)
                System.out.print("*\t");
                else
                System.out.print("\t");
            }
            
            System.out.println();
        }

        sc.close();
    }
}
