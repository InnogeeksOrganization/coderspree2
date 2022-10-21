import java.util.*;


public class Main {
  public static void main(String[] args)
  {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();

    int star = n;

    for (int i=1;i<=n;i++)
    {
      for (int j=1;j<=star;j++)
      {
        System.out.print("*	");
      }
      star--;
      System.out.println();
    }
  }
}