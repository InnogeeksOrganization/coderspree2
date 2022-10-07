import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int rem, d=0;
    while(n>0){
        rem = n%10;
        n=n/10;
        System.out.println(rem);
    }
  }
}