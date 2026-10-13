class Main {
    static int sum(int n) {
        int total = 0;
        System.out.println("Tracing sum(" + n + "):");
        for (int i = 1; i <= n; i++) {
            total += i;
            System.out.println("  i = " + i + ", current total = " + total);
        }
        return total;
    }

    public static void main(String[] args) {
        System.out.println("Result for sum(5): " + sum(5));
        System.out.println();
        System.out.println("Result for sum(3): " + sum(3));
    }
}
