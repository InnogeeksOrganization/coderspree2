package coderspear.pattern;
import java.util.*;
public class Pattern11 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int m=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(m+++"\t");
            }
            System.out.println();
        }

    }
}
