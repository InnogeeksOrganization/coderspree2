import java.util.Scanner;

public class The_Curious_Case_Of_Benjamin_Bulbs {
    public static void main(String[] args) {
        // write your code here  
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=Math.sqrt(n);i++){
            if(Math.pow(i,2)<=n) System.out.println((int)Math.pow(i,2));
        }
       }
}
