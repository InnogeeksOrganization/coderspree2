package coderspear;
import java.util.*;
public class DigitOfANumber {
    public static void main(String[] args) {
        // write your code here 
        Scanner sc = new Scanner(System.in);
          int n = sc.nextInt();
          int m = (int)(Math.log10(n)+1);
          int[] arr = new int[m];
          int i=0;
          while(n>0)
          {
              
              int c = n%10;
              arr[i++] = c;
              n = n/10; 
          }
          for (int j = m-1; j >=0 ; j--) {
              System.out.println(arr[j]);
          }
          sc.close();
     }
}
