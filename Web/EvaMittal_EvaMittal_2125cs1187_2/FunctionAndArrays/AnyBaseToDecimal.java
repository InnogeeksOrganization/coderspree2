import java.util.*;
public class AnyBaseToDecimal {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int b = scn.nextInt();
        scn.close();
        int d = getValueIndecimal(n, b);
        System.out.println(d);
     }
    
     public static int getValueIndecimal(int n, int b){
      int m,c=0,s=0;
      while(n>0)
      {
          m=n%10;
          s=s+(m*(int)Math.pow(b,c));
          c++;
          n=n/10;
      }
      return s;
     }
}
