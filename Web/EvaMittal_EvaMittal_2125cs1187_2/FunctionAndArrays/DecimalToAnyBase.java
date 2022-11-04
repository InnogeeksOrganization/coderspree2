import java.util.*;
public class DecimalToAnyBase {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int b = scn.nextInt();
        scn.close();
        int dn = getValueInBase(n, b);
        System.out.println(dn);
     }
    
     public static int getValueInBase(int n, int b){
         int m, s=0,c=0;
         while(n>=1)
         {
             m=n%b;
             s=s+(m*(int)Math.pow(10,c));
             c++;
             n=n/b;
         }
         return s;
     }
}
