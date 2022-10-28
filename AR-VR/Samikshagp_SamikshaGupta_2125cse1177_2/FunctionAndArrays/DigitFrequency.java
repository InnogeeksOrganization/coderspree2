import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int d = scn.nextInt();
        int f = getDigitFrequency(n, d);
        System.out.println(f);
    }

    public static int getDigitFrequency(int n, int d) {
        int k=0;
        int c=0;
        for(int i=n;i>0;i=i/10)
        {
            k=i%10;
            if(k==d)
            c++;
        }
        return c;
        // write code here
    }
}