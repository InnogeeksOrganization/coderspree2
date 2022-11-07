import java.util.*;
   
   public class Main{
  
    
      public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        long n = scn.nextLong();
        long temp = n;
        long k;
        k = scn.nextLong();
        int c =0;
        while(temp >0)
        {
            temp/=10;
            c++;
        }
        k= k%c;
        if(k<0)
        {
            k=k+c;
        }
        long d = (n%((long)Math.pow(10,k)))*((long)Math.pow(10,c-k)) + (n/((long)Math.pow(10,k)));
        temp = d;
        int cnt=0;
         while(temp >0)
        {
            temp/=10;
            cnt++;
        }
        while(c-cnt>0)
        {
            System.out.print("0");
            c--;
        }
        System.out.println(d);
      }
    }