package coderspear;

import java.util.*;
public class PrintFibonacciNumberTillN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int low = sc.nextInt();
        int high = sc.nextInt();
        for(int j=low;j<=high;j++){
             int count =0;
             for(int i=2;i*i<=j;i++)
             {
                 if(j%i==0)
                 {
                     count++;
                     break;
                 }
             }
            if(count==0){
                System.out.println(j);
            }
        }
        sc.close();
     }
}
