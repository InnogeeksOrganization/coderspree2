import java.io.*;
import java.util.*;

public class TheStateOfWakanda{

public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    int n=sc.nextInt();
    int m=sc.nextInt();
    int[][] A=new int[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)A[i][j]=sc.nextInt();
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                System.out.println(A[j][i]);
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                System.out.println(A[j][i]);
            }
        }
    }
    // write your code here
 }

}