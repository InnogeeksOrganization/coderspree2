import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int nspaces = n - 1;
        int nstars = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= nspaces; j++) {
                System.out.print("\t");
            }

            for (int j = 1; j <= nstars; j++) {
                System.out.print("*\t");
            }

            nspaces--;
            nstars++;
            System.out.println();
        }

    }
}