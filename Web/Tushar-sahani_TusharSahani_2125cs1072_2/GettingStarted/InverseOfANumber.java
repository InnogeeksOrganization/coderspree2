package coderspear;
import java.util.*;
public class InverseOfANumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = (int) (Math.log10(n)+1);
       
        int[] arr = new int[m+1];
        int i=1;
        while(n>0){
            int x = n%10;
            arr[x] = i++;
            n = n/10;
        }
        for (int j = m; j >=1; j--) {
            System.out.print(arr[j]);
        }
         
        sc.close();
    }
}
