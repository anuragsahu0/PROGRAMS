import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();

        if (n == 0) {
            System.out.println("Digit: 0");
            sc.close();
            return;
        }

        int temp = (n < 0) ? -n : n;

        System.out.println("Extracted digits (from right to left):");
        while (temp > 0) {
            int digit = temp % 10;
            System.out.print(digit + " ");
            temp = temp / 10;
        }
        System.out.println();
        sc.close();
    }
}
