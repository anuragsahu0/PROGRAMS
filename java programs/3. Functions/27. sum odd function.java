import java.util.Scanner;

class Main {
    static int sumOfOdds(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter N: ");
        int n = sc.nextInt();

        int result = sumOfOdds(n);
        System.out.println("Sum of odd numbers from 1 to " + n + " is: " + result);
        sc.close();
    }
}
