import java.util.*;
public class AnyBaseToAnyBase {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int sourceBase = scn.nextInt();
       int  destBase= scn.nextInt();
       scn.close();
       int f= convert(n,sourceBase,destBase);
       System.out.println(f);
     }   
     public static int convert(int n,int sourceBase,int destBase)
     {
         int m, s=0,c=0,r=0;
         while(n>0)
      {
          m=n%10;
          s=s+(m*(int)Math.pow(sourceBase,c));
          c++;
          n=n/10;
      }
      c=0;
       while(s>=1)
         {
             m=s%destBase;
             r=r+(m*(int)Math.pow(10,c));
             c++;
             s=s/destBase;
         }
         return r;
     }
}
