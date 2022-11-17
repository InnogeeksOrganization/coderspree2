import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
int n=scn.nextInt();
for(int i=n;i>=1;i--)
{
    for(int y=i;y<n;y--)
    {
        System.out.print(" ");
    }
    for(int z=1;z<=i;z++)
    {
        System.out.print("*");
    }
    System.out.println();
}
        // write ur code here

    }
}