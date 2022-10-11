import java.util.*;

public class inverseOfficial {

public static void main(String[] args) {

    int a[]= new int[10];
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    for(int i = 0; i < s.length(); i++)
    {
        a[i] = (int)s.charAt(i) - 48 ;
        // System.out.println(a[i]);
    }
    int b[] = new int[s.length()];
    for(int i = s.length()-1; i>=0; i--)
    {
        b[s.length()-a[i]] = s.length()-i;
    }
    int sum = 0;
    for(int i = 0; i<s.length() ; i++)
    {
        sum = sum*10 + b[i];
    }
    System.out.println(sum); 
}
}

