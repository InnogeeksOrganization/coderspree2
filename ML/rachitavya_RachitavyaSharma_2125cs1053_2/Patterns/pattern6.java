import java.util.*;
public class pattern6 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int st=n/2+1;
        int sp=1;
        for(int i=0;i<n;i++)
        {
            for(int x=0;x<st;x++)
            System.out.print("*");
            for(int y=0;y<sp;y++)
            System.out.print(" ");
            for(int z=0;z<st;z++)
            System.out.print("*");
            if(i<(n/2))
            {
                st--;
                sp+=2;
            }
            else
            {
                st++;
                sp-=2;
            }
            System.out.println();
        }

        sc.close();
    }
}
