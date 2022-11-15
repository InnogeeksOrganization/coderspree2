import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
      // write your code here
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int temp=a;
        a=Math.max(b,temp);
        b=Math.min(b,temp);
        int gcd=1;
        for(int x=a;x>=2;x--)
        {
            if(a%x==0&&b%x==0)
            {gcd=x;break;}
        }
        int lcm=(a*b)/gcd;
        System.out.println(gcd+"\n"+lcm);
     }
    }