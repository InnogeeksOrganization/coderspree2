import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int temp =n;
    int d=0;
    while(n!=0){
        n=n/10;
        d++;
    }
    int a = (int)Math.pow(10, d-1);
    while(a!=0){
        int digit = temp/a;
        System.out.println(digit);
        temp=temp%a;
        a=a/10;
    }
  }
}