import java.util.*;
public class spiral 
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

      int c=0,r1=0,c1=0,r2=m,c2=n;
      while(c<(m*n))
      {
        for(int i=r1;i<r2;i++)
        {
            System.out.println(arr[i][c1]);
            c++;
        }
        c1++;
        for(int i=c1;i<c2;i++)
        {
            System.out.println(arr[r2-1][i]);
            c++;
        }
        r2--;
        for(int i=(r2-1);i>=r1;i--)
        {
            System.out.println(arr[i][c2-1]);
            c++;
        }
        c2--;
        if(c>=(m*n)) break;
        for(int i=(c2-1);i>=c1;i--)
        {
            System.out.println(arr[r1][i]);
            c++;
        }
        r1++;
      }

      sc.close();

   }
    
}
