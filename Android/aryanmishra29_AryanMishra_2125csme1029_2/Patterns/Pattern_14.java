import java.util.*;

public class Pattern_14 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int x = scn.nextInt();
        int m=1;
        while(m<=10){
            System.out.printf("%d * %d = %d\n",x,m,x*m++);
        }
        // write ur code here

    }
}