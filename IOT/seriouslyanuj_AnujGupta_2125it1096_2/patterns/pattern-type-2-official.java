import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int nstars = n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= nstars; j++) {
                System.out.print("*\t");
            }
            nstars--;
            System.out.println();
        }

    }
}