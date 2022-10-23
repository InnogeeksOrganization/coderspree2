import java.util.*;

public class baseToDecimal {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int b = scn.nextInt();
        int d = getValueIndecimal(n, b);
        System.out.println(d);
        scn.close();
     }
    
     public static int getValueIndecimal(int n, int b){
        int pow = 0;
        int sum = 0;
        
        while(n > 0){
            int d = n % 10;
            sum = sum + d * (int)Math.pow(b, pow);
            n = n / 10;
            pow++;
        }
        
        return sum;
     }
}
