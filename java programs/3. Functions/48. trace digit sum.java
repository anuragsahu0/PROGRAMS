class Main {
    static int fun(int n) {
        int sum = 0;
        System.out.println("Tracing digit sum for fun(" + n + "):");
        while (n > 0) {
            int rem = n % 10;
            sum += rem;
            System.out.println("  extracted digit: " + rem + ", running sum: " + sum + ", remaining n: " + (n / 10));
            n /= 10;
        }
        return sum;
    }

    public static void main(String[] args) {
        int total = fun(1234);
        System.out.println("Final Sum of Digits of 1234: " + total);
    }
}
