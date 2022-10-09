import java.util.*;

public class Main {
  public static void main(String[] args)
  {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int sp = n/2, st=1,i,j; 
    for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= sp; j++)   
        System.out.print("	");
      for (j = 1; j <= st; j++)   
        System.out.print("*	");
      if ( i <= n / 2)
      { sp--;                  
        st+=2;                
      }
      else
      {
        sp++;                   
        st-=2;                
      }
      System.out.println();       
    }
  }
}