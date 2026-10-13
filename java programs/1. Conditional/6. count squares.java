import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter integer N: ");
        int n = sc.nextInt();

        int count = 0;
        for (int i = 1; i * i < n; i++) {
            count++;
        }

        System.out.println("Number of positive perfect squares strictly less than " + n + ": " + count);
        sc.close();
    }
}
