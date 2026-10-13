import java.util.Scanner;

class Main {
    static int getMax(int a, int b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        int maximum = getMax(num1, num2);
        System.out.println("Maximum is: " + maximum);
        sc.close();
    }
}
