import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number N: ");
        int n = sc.nextInt();
        System.out.print("Enter rotation K (positive for left, negative for right): ");
        int k = sc.nextInt();

        int temp = n;
        int count = 0;
        while (temp > 0) {
            count++;
            temp /= 10;
        }

        if (count <= 1) {
            System.out.println("Rotated number: " + n);
            sc.close();
            return;
        }

        k = k % count;
        if (k < 0) {
            k = k + count;
        }

        int div = 1;
        for (int i = 0; i < (count - k); i++) {
            div *= 10;
        }

        int leftPart = n / div;
        int rightPart = n % div;

        int multiplier = 1;
        for (int i = 0; i < k; i++) {
            multiplier *= 10;
        }

        int rotated = (rightPart * multiplier) + leftPart;

        System.out.println("Rotated number: " + rotated);
        sc.close();
    }
}
