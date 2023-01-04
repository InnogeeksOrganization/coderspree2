import java.util.*;

public class wakanda 
{

   public static void main(String[] args) 
   {
      Scanner sc = new Scanner(System.in);
      int m = sc.nextInt();
      int n = sc.nextInt();
      int[][] arr = new int[m][n];

      for (int i = 0; i < m; i++) 
      {
         for (int j = 0; j < n; j++) 
         {
            arr[i][j] = sc.nextInt();
         }
      }

      int c=0;
      while(c<n)
      {
        for(int i=0;i<m;i++)
        System.out.println(arr[i][c]);
        c++;
        if(c<n)
        {    
            for(int i=(m-1);i>=0;i--)
            System.out.println(arr[i][c]);
            c++;
        }
      }

      sc.close();

   }
}