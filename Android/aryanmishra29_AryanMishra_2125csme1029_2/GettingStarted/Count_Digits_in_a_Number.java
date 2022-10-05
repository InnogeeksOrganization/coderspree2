import java.util.Scanner;

public class Count_Digits_in_a_Number{
    public static void main(String[] args) {
        // write your code here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int d=0;
        while(n>0){
            d++;
            n/=10;
        }
        System.out.println(d);
       }
}