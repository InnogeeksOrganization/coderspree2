import java.util.*;

public class DigitFrequency {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int d = scn.nextInt();
        int f = getDigitFrequency(n, d);
        System.out.println(f);
        scn.close();
    }

    public static int getDigitFrequency(int n, int d) {
        
        int c = 0;
        while(n != 0){
            int di = n % 10;
            if(di == d)
                c++;
            n = n / 10;
        }
        
        return c;
    }
}
