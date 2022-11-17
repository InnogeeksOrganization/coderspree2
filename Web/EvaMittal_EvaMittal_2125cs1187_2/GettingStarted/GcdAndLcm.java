import java.util.*;
public class GcdAndLcm {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        sc.close(); 
        int l,r,a,b;
        a=num1;
        b=num2;
        while(a%b>0)
        {
            r=a%b;
            a=b;
            b=r;
        }
        System.out.println(b); //gcd
        l= (num1*num2)/b;
        System.out.println(l); //lcm
       }
}
