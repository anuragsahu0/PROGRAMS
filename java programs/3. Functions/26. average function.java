import java.util.Scanner;

class Main {
    static double findAverage(double a, double b, double c) {
        return (a + b + c) / 3.0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 3 numbers: ");
        double x = sc.nextDouble();
        double y = sc.nextDouble();
        double z = sc.nextDouble();

        double avg = findAverage(x, y, z);
        System.out.println("Average of " + x + ", " + y + ", " + z + " is: " + avg);
        sc.close();
    }
}
