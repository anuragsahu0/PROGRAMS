import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number X: ");
        long x = sc.nextLong();
        System.out.print("Enter base number Y: ");
        long y = sc.nextLong();

        if (y <= 1) {
            if (x == y) {
                System.out.println(x + " is a power of " + y);
            } else {
                System.out.println(x + " is NOT a power of " + y);
            }
            sc.close();
            return;
        }

        long temp = x;
        while (temp > 0 && temp % y == 0) {
            temp = temp / y;
        }

        if (temp == 1) {
            System.out.println(x + " is a power of " + y);
        } else {
            System.out.println(x + " is NOT a power of " + y);
        }
        sc.close();
    }
}
