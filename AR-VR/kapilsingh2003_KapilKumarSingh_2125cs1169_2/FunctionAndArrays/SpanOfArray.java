import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int[] arr = new int[n];
    for(int i=0; i<n; i++){
        arr[i]=scn.nextInt();
    }
    int max = arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    int res=max-min;
    System.out.print(res);
 }

}