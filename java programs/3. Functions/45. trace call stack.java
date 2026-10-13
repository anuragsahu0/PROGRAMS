class Main {
    static void D() {
        System.out.println("Inside D()");
    }

    static void C() {
        System.out.println("Inside C() - calling D()");
        D();
        System.out.println("Exiting C()");
    }

    static void B() {
        System.out.println("Inside B() - calling C()");
        C();
        System.out.println("Exiting B()");
    }

    static void A() {
        System.out.println("Inside A() - calling B()");
        B();
        System.out.println("Exiting A()");
    }

    public static void main(String[] args) {
        System.out.println("Main starts");
        A();
        System.out.println("Main ends");
    }
}
