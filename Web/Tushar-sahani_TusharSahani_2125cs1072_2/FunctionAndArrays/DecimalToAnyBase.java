package coderspear.FunctionAndArrays;
import java.util.*;
public class DecimalToAnyBase {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int b = scn.nextInt();
        int dn = getValueInBase(n, b);
        System.out.println(dn);
     }
    
     public static int getValueInBase(int n, int b){
        int a=0,power = 1;
        while(n!=0){
          int x = n%b;
          a += x*power;
          power = power*10;
          n = n/b;
          }
        
        return a;
     }
}
