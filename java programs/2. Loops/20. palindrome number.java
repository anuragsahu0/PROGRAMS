import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();

        if (n < 0) {
            System.out.println(n + " is NOT a Palindrome");
            sc.close();
            return;
        }

        int temp = n;
        int rev = 0;

        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp = temp / 10;
        }

        if (rev == n) {
            System.out.println(n + " is a Palindrome");
        } else {
            System.out.println(n + " is NOT a Palindrome");
        }
        sc.close();
    }
}
