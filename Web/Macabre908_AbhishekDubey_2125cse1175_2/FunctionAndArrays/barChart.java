import java.util.*;

public class barChart {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
    
        int max = 0;
        for(int i = 0; i < n; i++){
           arr[i] = sc.nextInt();
           max = Math.max(max, arr[i]);
        }
    
        for(int i = 0; i < max; i++){
           for(int val: arr){
             if(val >= max - i){
                System.out.print("*\t");
             } else {
                System.out.print("\t");
             }
           }
    
           System.out.println();
        }
        sc.close();
     }
}
