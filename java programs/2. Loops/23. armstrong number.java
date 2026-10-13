import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();

        int temp = n;
        int digits = 0;

        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }

        temp = n;
        int sum = 0;

        while (temp > 0) {
            int rem = temp % 10;
            int p = 1;
            for (int i = 0; i < digits; i++) {
                p *= rem;
            }
            sum += p;
            temp = temp / 10;
        }

        if (sum == n) {
            System.out.println(n + " is an Armstrong number");
        } else {
            System.out.println(n + " is NOT an Armstrong number");
        }
        sc.close();
    }
}
