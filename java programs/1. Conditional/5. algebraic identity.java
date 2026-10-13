import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter integer a: ");
        long a = sc.nextLong();
        System.out.print("Enter integer b: ");
        long b = sc.nextLong();

        long lhs = (a + b) * (a + b) * (a + b);
        long rhs = (a * a * a) + (b * b * b) + (3 * a * a * b) + (3 * a * b * b);

        System.out.println("LHS = (a + b)^3 = " + lhs);
        System.out.println("RHS = a^3 + b^3 + 3a^2b + 3ab^2 = " + rhs);

        if (lhs == rhs) {
            System.out.println("VERIFIED");
        } else {
            System.out.println("NOT VERIFIED");
        }
        sc.close();
    }
}
