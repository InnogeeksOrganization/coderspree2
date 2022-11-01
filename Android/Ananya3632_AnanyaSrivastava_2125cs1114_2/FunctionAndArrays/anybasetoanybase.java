import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int sourceBase = scn.nextInt();
    int destBase = scn.nextInt();
    int value = getValue(n, sourceBase, destBase);
    System.out.println(value);
  }
  public static int getValue(int n, int src, int dest)
  {
    int decimalValue = anyBaseToDecimal(n, src); 
    int finalBaseValue = decimalToAnyBase(decimalValue, dest); 
    return finalBaseValue;
  }

  public static int decimalToAnyBase(int n, int b) {
    int p = 1; 
    int rv = 0; 
    while (n > 0)
    {
      int dig = n % b; 
      rv += (dig * p); 
      p *= 10; 
      n = n / b; 
    }
    return rv; 
  }
 
  public static int anyBaseToDecimal(int n, int b) {
    int rv = 0;
    int p = 0;
    while (n > 0)
    {
        int dig = n % 10;
      rv += (dig * Math.pow(b, p));
      p++; 
      n /= 10; 
    }
    return rv;
  }
}