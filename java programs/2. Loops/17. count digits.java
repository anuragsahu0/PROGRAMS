import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();
        int count = 0;

        if (n == 0) {
            count = 1;
        } else {
            int temp = (n < 0) ? -n : n;
            while (temp > 0) {
                count++;
                temp = temp / 10;
            }
        }

        System.out.println("Total number of digits: " + count);
        sc.close();
    }
}
