package coderspear;

import java.util.*;

public class GradingSystem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int marks = sc.nextInt();

        System.out.println(marks > 90 ? "excellent"
                : marks > 80 && marks <= 90 ? "good"
                        : marks > 70 && marks <= 80 ? "fair"
                                : marks > 60 && marks <= 70 ? "meets expectations"
                                        : marks <= 60 ? "below par" : 0);
        sc.close();
    }
}