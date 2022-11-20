import java.util.*;

public class Pattern_11 {

    public static void main(String[] args) {
        int i;
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int count=1;
        for(i=0;i<n;i++){
            for(int j=0;j<=i;j++) System.out.print((count++)+"\t");
            System.out.println();
        }   
    }
}