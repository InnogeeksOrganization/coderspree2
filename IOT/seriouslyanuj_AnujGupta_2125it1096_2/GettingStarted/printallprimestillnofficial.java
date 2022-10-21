import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        // write your code here
        Scanner sc=new Scanner(System.in);
        int i;
        int low=sc.nextInt();
        int high=sc.nextInt();
        for(i=low;i<=high;i++)
        {
            int k=2;
            while(k*k<=i)
            {
                if(i%k==0)
                {
                    break;
                }
                k++;
            }
            if(k * k > i)
            System.out.println(i);
        }
    }
}