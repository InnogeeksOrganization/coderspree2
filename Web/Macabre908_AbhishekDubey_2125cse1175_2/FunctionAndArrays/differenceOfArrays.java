import java.util.*;

public class differenceOfArrays {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
    
        int n1 = sc.nextInt();
        int[] a1 = new int[n1];
        for(int i = 0; i < n1; i++){
           a1[i] = sc.nextInt();
        }
    
        int n2 = sc.nextInt();
        int[] a2 = new int[n2];
        for(int i = 0; i < n2; i++){
           a2[i] = sc.nextInt();
        }
    
        int[] diff = new int[n2];
        int i = n1 - 1;
        int j = n2 - 1;
        int k = diff.length - 1;
        int carry = 0;
        while(k >= 0){
           int v;
    
           if(i >= 0){
             v = a1[i];
           } else {
             v = 0;
           }
    
           if(a2[j] + carry >= v){
             diff[k] = a2[j] + carry - v;
             carry = 0;
          } else {
            diff[k] = a2[j] + carry + 10 - v;
            carry = -1;
          }
    
           i--;
           j--;
           k--;
        }
    
        int index = 0;
        while(index < diff.length){
          if(diff[index] != 0){
            break;
          } else {
            index++;
          }
        }
    
        while(index < diff.length){
          System.out.println(diff[index]);
          index++;
        }
        sc.close();
     }
}
