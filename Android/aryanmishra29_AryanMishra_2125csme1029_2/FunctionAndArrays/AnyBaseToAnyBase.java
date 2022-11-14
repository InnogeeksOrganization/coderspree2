import java.util.*;
  
public class AnyBaseToAnyBase{
  
  public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int sourceBase = scn.nextInt();
        int  destBase= scn.nextInt();
        int result = convertBase(n,sourceBase,destBase);
        System.out.println(result);
   }  
    public static int convertBase(int n,int sour,int dest){
        int p=1;
        int x=0;
        while(n>0){
            int d = n%10;
            x+=d*p;
            p*=sour;
            n/=10;
        }
        int q=1;
        int y=0;
        while(x>0){
            int d = x%dest;
            y+=d*q;
            q*=10;
            x/=dest;
        }
        return y;
    }
}