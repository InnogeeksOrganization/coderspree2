import java.io.*;
import java.util.*;

public class SpiralDisplay {

   public static void main(String[] args) throws Exception {
      Scanner sc=new Scanner(System.in);
      int n = sc.nextInt();
      int m = sc.nextInt();
      int[][] arr = new int[n][m];

      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
            arr[i][j] = sc.nextInt();
         }
      }

      int count = 0;
      int tne  = n * m;
      int minr = 0;
      int minc = 0;
      int maxr = n - 1;
      int maxc = m - 1;
      while(count < tne){
         for(int i = minr; i <= maxr && count < tne; i++){
            System.out.println(arr[i][minc]);
            count++;
         }
         minc++;

         for(int j = minc; j <= maxc && count < tne; j++){
            System.out.println(arr[maxr][j]);
            count++;
         }
         maxr--;

         for(int i = maxr; i >= minr && count < tne; i--){
            System.out.println(arr[i][maxc]);
            count++;
         }
         maxc--;

         for(int j = maxc; j >= minc && count < tne; j--){
            System.out.println(arr[minr][j]);
            count++;
         }
         minr++;

      }
   }

}
                                