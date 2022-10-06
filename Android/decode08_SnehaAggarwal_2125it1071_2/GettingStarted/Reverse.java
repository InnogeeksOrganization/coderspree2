import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    long n= scn.nextInt();
    long d;
    while(n>0){
        d=n%10;
        System.out.println(d);
        n=n/10;
    }
    }
   }