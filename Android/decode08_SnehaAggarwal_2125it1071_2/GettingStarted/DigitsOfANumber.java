
import java.util.*;
    
    public class Main{
        static long tens(int x, int y){
          long t=1;
        
          while(y>0){
              t=t*x;
              y--;
          }
          
          return t;
        }
    
    public static void main(String[] args) {
     Scanner scn = new Scanner (System.in) ;
     long n=scn.nextInt();
     long m=n;
     int c=0;
     long d;
     while(m>0){
         m=m/10;
         c++;
     }
    int i=c;
     while(i>0){
         c=c-1;
         d=n/tens(10,c);
         d=d%10;
         System.out.println(d);
        // c--;
         i--;
     }
     }
    }