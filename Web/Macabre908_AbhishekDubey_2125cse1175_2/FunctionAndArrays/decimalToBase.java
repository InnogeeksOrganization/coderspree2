import java.util.*;

public class decimalToBase {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int b = scn.nextInt();
        int dn = getValueInBase(n, b);
        System.out.println(dn);
        scn.close();
     }
    
     public static int getValueInBase(int n, int b){
         int temp = 0;
    
        int multfact = 1;
        while(n > 0){
            int d = n % b;
            n = n / b;
            temp = temp + multfact * d;
            multfact = multfact * 10;
        }
    
         return temp;
     }
}
