import java.util.*;

public class Main{
    public static void main(String[] args) {
        int div;
        //  write your code here

        Scanner sc = new Scanner(System.in);

        int low = sc.nextInt();
        int high = sc.nextInt();
        for(int num = low ; num <= high; num++)
        {
            for ( div = 2 ; div*div<= num; div++)
            {
                if(num%div == 0)
                {
                    break;
                }


            }
            if (div * div > num){
                System.out.println(num);
            }
        }
    }
}
