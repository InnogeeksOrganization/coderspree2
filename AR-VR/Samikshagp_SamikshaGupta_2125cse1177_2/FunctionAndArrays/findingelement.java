import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int a[]=new int[n];
    int p=0;
    int f=0;
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    int k=sc.nextInt();
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            p=i;
            f=1;
            break;
        }
    }
    if(f==1)
    System.out.println(i);
    else
    System.out.println("-1");
    // write your code here
 }

}