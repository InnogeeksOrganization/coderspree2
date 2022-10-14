package coderspear.pattern;

import java.util.*;

public class Pattern2 {
    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        for (int i = n; i > 0; i--) {
            for (int j = i; j > 0; j--) {
                System.out.print("*" + "\t");
            }
            System.out.println();
        }
    scn.close();
    }
}
