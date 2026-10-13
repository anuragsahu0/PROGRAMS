import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter total units consumed: ");
        int units = sc.nextInt();
        double bill = 0;

        if (units <= 100) {
            bill = units * 5.0;
        } else if (units <= 200) {
            bill = (100 * 5.0) + (units - 100) * 7.0;
        } else if (units <= 300) {
            bill = (100 * 5.0) + (100 * 7.0) + (units - 200) * 10.0;
        } else {
            bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + (units - 300) * 12.0;
        }

        System.out.println("Total Electricity Bill: Rs. " + bill);
        sc.close();
    }
}
