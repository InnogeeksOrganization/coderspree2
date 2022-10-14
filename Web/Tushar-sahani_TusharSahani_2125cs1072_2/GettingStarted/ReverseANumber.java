package coderspear;
import java.util.*;
public class Reverseanumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
          int n = sc.nextInt();
          while(n>0){
              int x = n%10;
              System.out.println(x);
              n = n/10;
          }
       sc.close();
      }
}
