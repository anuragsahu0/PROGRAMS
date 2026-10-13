import java.util.Scanner;

class Main {
    static long calculatePower(int x, int n) {
        long result = 1;
        for (int i = 0; i < n; i++) {
            result *= x;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter base (x): ");
        int base = sc.nextInt();
        System.out.print("Enter exponent (n): ");
        int exp = sc.nextInt();

        long ans = calculatePower(base, exp);
        System.out.println(base + "^" + exp + " = " + ans);
        sc.close();
    }
}
