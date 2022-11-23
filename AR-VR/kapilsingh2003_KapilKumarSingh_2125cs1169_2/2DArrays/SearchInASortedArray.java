import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        
        int[][] arr=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            arr[i][j]=sc.nextInt();
        }
        
        int x = sc.nextInt();
        int flag=0, row=0, col=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            if(arr[i][j]==x){
                flag=1;
                row=i;
                col=j;
                break;
            }
        }
        
        if(flag>0){
        System.out.println(row);
        System.out.println(col);
        }
        else
        System.out.print("Not Found");
        
        
        
    }

}