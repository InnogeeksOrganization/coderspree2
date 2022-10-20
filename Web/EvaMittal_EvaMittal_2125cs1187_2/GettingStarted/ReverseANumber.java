import java.util.*;
public class ReverseANumber {
    public static void main(String[] args) {
        // write your code here  
        Scanner sc= new Scanner(System.in);
        long  n= sc.nextLong();
        sc.close();
        int m;
        while(n>0)
        {
            m=(int)(n%10);
            System.out.println(m);
            n=n/10;
        }
       }
}
