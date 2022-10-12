package coderspear;

import java.util.*; 

public class IsANumberPrime {
    public static void main(String[] args) {
       Scanner scn = new Scanner(System.in);
       int t = scn.nextInt();
       while(t-->0){
           int n = scn.nextInt();
           int count =0;
           for(int i=2;i*i<=n;i++)
           {
               if(n%i==0)
               {
                count++;
               }
           }
           if(count>0){
            System.out.println("not prime");
           }
           else{
            System.out.println("prime");
           }
       }
       scn.close();
    }
}
