import java.util.*;

public class findANumInArray {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i = 0; i < n; i++){
                arr[i] = sc.nextInt();
            }
            
            int d = sc.nextInt();
            boolean flag = false;
            int index = 0;
            for(int i = 0; i < n; i++){
            if(arr[i] == d){
                flag = true;
                index = i;
                break;
            }
            }    
            if(flag == true)
            System.out.println(index);
            else
            System.out.println(-1);
            sc.close();
     }
}
