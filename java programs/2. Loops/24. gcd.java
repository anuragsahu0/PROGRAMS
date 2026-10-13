import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        int x = a, y = b;

        while (y != 0) {
            int rem = x % y;
            x = y;
            y = rem;
        }

        System.out.println("GCD of " + a + " and " + b + " is: " + x);
        sc.close();
    }
}
