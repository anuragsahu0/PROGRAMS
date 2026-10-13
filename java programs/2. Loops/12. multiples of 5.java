import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter N: ");
        int n = sc.nextInt();

        System.out.println("Multiples of 5 between 1 and " + n + ":");
        for (int i = 5; i <= n; i += 5) {
            System.out.print(i + " ");
        }
        System.out.println();
        sc.close();
    }
}
