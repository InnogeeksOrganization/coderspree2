import java.util.*;

public class Digits_Of_A_Number{

public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n=sc.nextInt();
    int k=n;
    int count=0;
    while(k>0){
        count++;
        k=k/10;
    }
    while(count>0){
        int d=(int)Math.pow(10,count-1);
        System.out.println(n/d);
        n=n%d;
        count--;
    }
}
    
}