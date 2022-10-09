import java.util.*;
    
    public class GCD_LCM{
        
        public static int gcd(int a,int b){
            int m = a<b?a:b;
            while(m>0){
                if(a%m==0&&b%m==0) return m;
                m--;
            }
            return 1;
        }
        public static int lcm(int a,int b){
            int m = a>b?a:b;
            while(m<=a*b){
                if(m%a==0&&m%b==0) return m;
                m++;
            }
            return a*b;
        }
        public static void main(String[] args) {
        // write your code here
            Scanner sc= new Scanner(System.in);
            int a=sc.nextInt();
            int b=sc.nextInt();
            System.out.println(gcd(a,b));
            System.out.println(lcm(a,b));
        }
    }