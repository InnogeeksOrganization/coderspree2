import java.util.*;

public class Main {
  public static void main(String[] args)
  {
    Scanner scn = new Scanner(System.in);
    int i,j,n;
    n=scn.nextInt();
    for(i=1;i<=n;i++) 
    {
      for(j=1;j<=n;j++)
      {
        if(i==j || i+j==n+1)
          System.out.print("*\t");
        else
          System.out.print("\t");
      }
      System.out.println();   
    }
  }
}