import java.util.*;
public class pattern7 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            for(int x=0;x<n;x++)
            {
                if(i==x)
                System.out.print("*");
                else
                System.out.print("\t");
            }
            
            System.out.println();
        }

        sc.close();
    }
}
