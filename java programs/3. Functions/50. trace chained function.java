class Main {
    static int fun1(int x) {
        System.out.println("Inside fun1(" + x + "): computes (" + x + " * 2)");
        return x * 2;
    }

    static int fun2(int x) {
        System.out.println("Inside fun2(" + x + "): calling fun1(" + x + ") + 3");
        return fun1(x) + 3;
    }

    public static void main(String[] args) {
        System.out.println("Calling fun2(5):");
        int ans = fun2(5);
        System.out.println("Final Answer: " + ans);
    }
}
