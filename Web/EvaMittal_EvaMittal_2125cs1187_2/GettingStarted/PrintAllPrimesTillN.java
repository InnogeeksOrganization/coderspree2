import java.util.*;
public class PrintAllPrimesTillN {
    public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);
    long low = sc.nextLong();
    long high = sc.nextLong();
    long i,j;
    int f;
    for(i=low;i<=high;i++)
    { 
        if(i<=1)
        continue;

        f=0;
        for (j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        System.out.println(i);
    }
    }
}
