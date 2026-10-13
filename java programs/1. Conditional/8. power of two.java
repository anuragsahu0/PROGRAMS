import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        long n = sc.nextLong();

        if (n <= 0) {
            System.out.println(n + " is NOT a power of 2");
        } else {
            long temp = n;
            while (temp % 2 == 0) {
                temp = temp / 2;
            }

            if (temp == 1) {
                System.out.println(n + " is a power of 2");
            } else {
                System.out.println(n + " is NOT a power of 2");
            }
        }
        sc.close();
    }
}
