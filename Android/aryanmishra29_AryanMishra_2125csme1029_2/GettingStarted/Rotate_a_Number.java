import java.util.Scanner;

public class Rotate_a_Number {  
   public static void main(String[] args) {
     // write your code here  
     Scanner sc = new Scanner(System.in);
     int n=sc.nextInt();
     int k=sc.nextInt();
     int temp=n;
     int ans=0;
     int count=0;
     int pos;
     while(temp>0){
         temp/=10;
         count++;
     }
     k%=count;
     if(k<0)k+=count;
     for(int i=1;i<=count;i++){
         int d=n%10;
         if(i-k<1){
             pos=i-k+count;
         }
         else pos=i-k;
         ans+=d*Math.pow(10,pos-1);
         n/=10;
     }
     System.out.println(ans);
    }
   }

