package coderspear.pattern;
import java.util.*;
public class Pattern12 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int a=0,b=1,c=1;
        System.out.println(a);
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                System.out.print(c+" ");
                c = a+b;
                a = b;
                b = c;
                
            }
            System.out.println();
        }
    }
}
