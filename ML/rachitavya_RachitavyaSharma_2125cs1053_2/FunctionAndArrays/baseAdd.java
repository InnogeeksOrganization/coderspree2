import java.util.*;
  
  public class baseAdd
  {
  
    public static void main(String[] args) 
    {
        Scanner scn = new Scanner(System.in);
        int b = scn.nextInt();
        int n1 = scn.nextInt();
        int n2 = scn.nextInt();
    
        int d = getSum(b, n1, n2);
        System.out.println(d);
        scn.close();
    }
    
    public static int getSum(int b, int n1, int n2)
    {
        int temp=0,d,i=0,d1,d2,sum=0;
       while(n1>0 || n2>0)
       {
        d1=n1%10;
        d2=n2%10;
        n1/=10;
        n2/=10;
        d=d1+d2+temp;
        temp=0;
        if(d>=b)
        {
            d-=b;
            temp=1;
        }
        sum+=d*((int)Math.pow(10,i++));
       }
       if(temp==1) 
       return ((int)Math.pow(10,i)+sum);
       return sum;
    }
    
  }