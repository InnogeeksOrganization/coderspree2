// import java.util.*;

public class PrintZ {

  public static void main(String[] args) {
    // Write your code here
     int i,j;
    for(i=1;i<=5;i++)
  {
      System.out.print("*");
  }
   System.out.println();
   for(i=3;i>=1;i--)
   {
   for(j=i;j>=1;j--)
   {
       System.out.print(" ");
   }
   System.out.println("*");
   }
   for(i=1;i<=5;i++)
  {
      System.out.print("*");
  }
  }
}