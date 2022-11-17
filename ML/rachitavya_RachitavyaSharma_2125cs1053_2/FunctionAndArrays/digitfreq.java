import java.util.*;

public class digitfreq {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int d = scn.nextInt();
        int f = getDigitFrequency(n, d);
        System.out.println(f);
    }

    public static int getDigitFrequency(int n, int d) {
        // write code here
        int c=0;
        while(n>0)
        {
            if(n%10==d)
            c++;
            n/=10;
        }
        return c;
    }
}
