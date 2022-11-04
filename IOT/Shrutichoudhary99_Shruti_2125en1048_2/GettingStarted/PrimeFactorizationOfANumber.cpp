import java.util.*;

public class Main {
  public static void main(String[] args)
  {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();

    for (int div = 2; div * div <= n; div++)
    {
      while (n % div == 0)
      {
        System.out.print(div + " ");
        n = n / div;
      }
    }
    if (n != 1)
    {
      System.out.print(n);
    }

  }
}