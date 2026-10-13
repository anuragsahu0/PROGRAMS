import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();
        int rev = 0;

        int temp = (n < 0) ? -n : n;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp = temp / 10;
        }

        if (n < 0) {
            rev = -rev;
        }

        System.out.println("Reversed number: " + rev);
        sc.close();
    }
}
