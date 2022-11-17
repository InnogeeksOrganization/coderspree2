import java.io.*;
import java.util.*;

public class ArrayDemo{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int[][] A = new int[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)A[i][j]=sc.nextInt();
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            System.out.print(A[i][j]+" ");
        }
        System.out.println();
    }
 }

}