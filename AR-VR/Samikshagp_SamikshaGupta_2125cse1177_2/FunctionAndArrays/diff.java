import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int a[]=new int[n];
    int l=0;
    int s=0;
    int diff=0;
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    l=a[0];
    s=a[0];
    for(int i=1;i<n;i++)
    {
        if(l<a[i])
        {
            l=s[i];
        }
        if(s>a[i])
        {
            s=a[i];
        }
    }
    diff=l-s;
    System.out.println(diff);
    
    
    // write your code here
 }

}