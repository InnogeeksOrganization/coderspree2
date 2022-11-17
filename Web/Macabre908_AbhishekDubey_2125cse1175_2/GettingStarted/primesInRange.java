import java.util.*;

public class primesInRange {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int low = sc.nextInt();
        int high = sc.nextInt();

        for(int i = low; i <= high; i++){
            int count = 1;
            for(int j = 1; j <= i / 2; j++){
                if(i % j == 0)
                count++;
            }

            if(count == 2)
            System.out.println(i);
        }

        sc.close();
    }
}
