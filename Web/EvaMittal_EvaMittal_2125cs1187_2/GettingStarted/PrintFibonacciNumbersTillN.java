import java.util.*;
public class PrintFibonacciNumbersTillN {
    public static void main(String[] args) {
        // write your code here
        Scanner scn= new Scanner(System.in);
        int n = scn.nextInt();
        scn.close();
        int i, a=0, b=1,c;
        System.out.println(a);
        System.out.println(b);
        for(i=3;i<=n;i++)
        {
            c=a+b;
            System.out.println(c);
            a=b;
            b=c;
        }
     }
    
}
