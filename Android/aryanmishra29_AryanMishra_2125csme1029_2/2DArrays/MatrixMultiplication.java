import java.io.*;
import java.util.*;

public class MatrixMultiplication{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n1=sc.nextInt();
    int m1=sc.nextInt();
    int [][]A1=new int[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++)A1[i][j]=sc.nextInt();
    }
    int n2=sc.nextInt();
    int m2=sc.nextInt();
    int [][]A2=new int[n2][m2];
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++)A2[i][j]=sc.nextInt();
    }
    if(m1!=n2) System.out.println("Invalid input");
    else{
        int[][] Res= new int[n1][m2];
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                int s=0;
                for(int k=0;k<m1;k++){
                    s+=(A1[i][k]*A2[k][j]);
                }
                Res[i][j]=s;
            }
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                System.out.print(Res[i][j]+" ");
            }
            System.out.println();
        }
    }
 }

}