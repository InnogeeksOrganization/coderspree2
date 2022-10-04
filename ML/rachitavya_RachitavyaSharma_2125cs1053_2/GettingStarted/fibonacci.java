import java.util.*;
public class fibonacci 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i,a=0,b=1,c;
        for(i=0;i<n;i++)
        {
            if(i==0 || i==1) System.out.println(i);
            else
            {
                c=a+b;
                System.out.println(c);
                a=b;
                b=c;
            }
        }
        sc.close();
    }
}
