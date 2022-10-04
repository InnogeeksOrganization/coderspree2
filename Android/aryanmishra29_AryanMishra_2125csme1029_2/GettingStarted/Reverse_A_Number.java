import java.util.Scanner;

public class Reverse_A_Number {
   public static void main(String[] args) {
     // write your code here 
     Scanner sc = new Scanner(System.in);
     int n=sc.nextInt();
     while(n>0){
         System.out.println(n%10);
         n=n/10;
     }
    }
   
}
