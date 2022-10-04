import java.util.*;
public class Print_Fibonacci_till_n {
    public static void printFib(int n){
        int a=0;
        int b=1;
        if(n==1) System.out.println(a);
        else if(n==2){
            System.out.println(a);
            System.out.println(b);
        }
        else{
            System.out.println(a);
            System.out.println(b);
            for(int i=2;i<n;i++){
                int c=a+b;
                System.out.println(c);
                a=b;
                b=c;
            }
        }
    }
  
  public static void main(String[] args) {
      // write your code here
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      printFib(n);
   }
}
