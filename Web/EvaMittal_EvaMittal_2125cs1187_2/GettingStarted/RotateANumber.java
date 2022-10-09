import java.util.*;
public class RotateANumber {
    public static void main(String[] args) {
        // write your code here  
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        int k= sc.nextInt();
        sc.close();
        int m,t,c=0;
        t=n;
        String s="",r="";
        while(t>0)
        {
            c++;
            t=t/10;
        }
       
       if(k>0)
       {
        m= n % (int)Math.pow(10,k%c);
        n= n / (int)Math.pow(10,k%c);
         if(m!=0)
        s=Integer.toString(m);
        r=s+n;
       }
        else if(k<0)
        {
            k = Math.abs(k);
          m= n / (int)Math.pow(10,(c-(k%c)));
          n=n % (int)Math.pow(10,(c-(k%c)));
          if(m!=0)
          s=Integer.toString(m);
          r=n+s;
        }
        System.out.println(r);
       }
}
