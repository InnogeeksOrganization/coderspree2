import java.util.*;
public class Main {
    public static void printFibonacci(int n){
        int a=0,b=1,c;
        System.out.println(a);
        if(n==2){
            System.out.println(b);
        }
        else{
            System.out.println(b);
            for(int i=2;i<n;i++){
                c=a+b;
                System.out.println(c);
                a=b;
                b=c;
            }
        }
    }
  public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      printFibonacci(n);
   }
}
