import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
     // write your code here  
     long n,l,n1;
     long k,c=0,i;
     Scanner sc=new Scanner(System.in);
     n=sc.nextLong();
     k=sc.nextInt();
     n1=n;
     while(n1!=0)
         {
             c++;
             n1=n1/10;
         }
     if(k%c==0)
      System.out.println(n);
     else if(k>0)
     {
         for(i=0;i<k;i++)
         {
           l=n%10;
           n=n/10;
           n=(Math.round(Math.pow(10,c-1))*l)+n;
         }
         System.out.println(n);
     }
     else
     {
         for(i=k;i>0;i--)
         {
             l=n%Math.round(Math.pow(10,c-1));
             n=n/Math.round(Math.pow(10,c-1));
             n=n*10+l;
           
         }
         System.out.println(n);
     }
    }
   }