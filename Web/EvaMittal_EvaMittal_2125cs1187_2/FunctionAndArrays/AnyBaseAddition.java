import java.util.*; 
public class AnyBaseAddition {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int b = scn.nextInt();
        int n1 = scn.nextInt();
        int n2 = scn.nextInt();
        scn.close();
        int d = getSum(b, n1, n2);
        System.out.println(d);
     }
    
     public static int getSum(int b, int n1, int n2){
         int sum;
         int f = toDecimal(n1,b);
         int s= toDecimal(n2,b);
         sum= f+s;
         
         //converting sum into resultant base
         int m, res=0,c=0;
         while(sum>=1)
         {
             m=sum%b;
             res=res+(m*(int)Math.pow(10,c));
             c++;
             sum=sum/b;
         }
         return res;
         
     }
      public static int toDecimal( int a,int b)
      {
      int m,c=0,res=0;
      while(a>0)
      {
          m=a%10;
          res=res+(m*(int)Math.pow(b,c));
          c++;
          a=a/10;
      }
      return res;
      }
}
