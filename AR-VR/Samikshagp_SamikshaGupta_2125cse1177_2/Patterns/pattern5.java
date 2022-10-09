import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int nspaces = n / 2;
        int nstars = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= nspaces; j++) {
                System.out.print("\t");
            }

            for (int j = 1; j <= nstars; j++) {
                System.out.print("*\t");
            }

            if (i <= n / 2) {
                nspaces--;
                nstars += 2;
            } else {
                nspaces++;
                nstars -= 2;
            }

            System.out.println();
        }

    }
}