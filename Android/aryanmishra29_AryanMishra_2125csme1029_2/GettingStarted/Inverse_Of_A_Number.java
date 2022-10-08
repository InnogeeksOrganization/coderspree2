import java.util.*;
public class Inverse_Of_A_Number {

public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n=sc.nextInt();
    int m=0;
    int x=1;
    while(n>0){
        int temp=n%10;
        n=n/10;
        m+=x*Math.pow(10,temp-1);
        x++;
    }
    System.out.println(m);
}
    
}

