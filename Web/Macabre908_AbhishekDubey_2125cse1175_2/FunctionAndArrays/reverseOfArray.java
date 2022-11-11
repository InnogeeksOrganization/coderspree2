import java.util.*;

public class reverseOfArray {
    public static void display(int[] a){
        StringBuilder sb = new StringBuilder();
    
        for(int val: a){
          sb.append(val + " ");
        }
        System.out.println(sb);
      }
    
      public static void reverse(int[] a){
        int n = a.length;
        int low = 0;
        int high = n - 1;
        
        while(low < high){
            int temp = a[low];
            a[low] = a[high];
            a[high] = temp;
            low++;
            high--;
        }
      }
    
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
    
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
           a[i] = sc.nextInt();
        }
    
        reverse(a);
        display(a);
        sc.close();
     }
}
