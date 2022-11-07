import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();

    int nod = 0;
    int temp = n;
    while (temp != 0) {
      temp /= 10;
      nod++;
    }

    k = k % nod;
    if (k < 0)
      k += nod;

    int div = 1;
    int mult = 1;
    for (int i = 1; i <= nod; i++) {
      if (i <= k)
        div *= 10;
      else
        mult *= 10;
    }

    int quo = n / div;
    int rem = n % div;

    int r = rem * mult + quo;
    System.out.println(r);
  }
}