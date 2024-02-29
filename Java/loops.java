import java.util.Scanner;

public class loops {
    public static void main(String[] args) {
        // for (int num = 0; num < 10; num += 1) {
        // System.out.println(num);
        // }
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        for (int num = 1; num <= n; num++) {
            System.out.println("Hello world!");
        }
    }
}
