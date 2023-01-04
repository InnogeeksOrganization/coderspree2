import java.util.*;
  
  public class baseSub
  {
  
  public static void main(String[] args) 
  {
      Scanner scn = new Scanner(System.in);
      int b = scn.nextInt();
      int n1 = scn.nextInt();
      int n2 = scn.nextInt();
  
      int d = getDifference(b, n1, n2);
      System.out.println(d);
      scn.close();
   }
  
   public static int getDifference(int b, int n1, int n2)
   {
        int temp=0,d,i=0,d1,d2,dif=0;
        while(n1>0 || n2>0)
        {
            d1=n1%10;
            d2=(n2%10)-temp;
            n1/=10;
            n2/=10;
            if(d2>=d1)
            {
                d=d2-d1;
                temp=0;
            }
            else
            {
                d=(d2+b-d1);
                temp=1;
            }
            dif+=d*((int)Math.pow(10,i++));
        }
        return dif;
   }
  
  }