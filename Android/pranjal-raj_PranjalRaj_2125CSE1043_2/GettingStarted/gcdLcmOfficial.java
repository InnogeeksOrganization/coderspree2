
import java.util.*;
    
public class gcdLcmOfficial {
    
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     long a = sc.nextLong();
     long b = sc.nextLong();
     long gcf = 0, lcm;
        long min = a>b?b:a;
        for(int i = 1; i<min; i++)
        {
            if(a%i==0&&b%i==0)
            {
                gcf = i;
            }
        }
        System.out.println(gcf);
        System.out.println((a*b)/gcf);
     }
    }
