import java.util.*;
class Fibonacci {
  public static void main(String[] args) {

    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int firstTerm = 0,secondTerm = 1;


    for (int i = 1; i <= n; ++i) {
      System.out.println(firstTerm);
      int nextTerm = firstTerm + secondTerm;
      firstTerm = secondTerm;
      secondTerm = nextTerm;
    }
    scn.close();
  }
}