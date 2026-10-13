import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();
        int sum = 0;

        int temp = (n < 0) ? -n : n;
        while (temp > 0) {
            sum += (temp % 10);
            temp = temp / 10;
        }

        System.out.println("Sum of digits: " + sum);
        sc.close();
    }
}
