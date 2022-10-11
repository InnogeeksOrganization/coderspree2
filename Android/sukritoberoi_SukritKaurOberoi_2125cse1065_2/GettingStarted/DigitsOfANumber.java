import java.util.*;
import java.lang.Math;

public class Main {

  public static void main(String[] args) {
    // write your code here
    Scanner sc = new Scanner(System.in);
    long n = sc.nextLong();
    long d = 0, n1 = 0;
    while (n != 0)
    {
      n1 = (n1 * 10) + (n % 10);
      n = n / 10;
      d++;
    }
    while (d != 0)
    {
      System.out.println(n1 % 10);
      n1 = n1 / 10;
      d--;
    }
  }
}