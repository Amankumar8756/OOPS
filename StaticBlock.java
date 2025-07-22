public class StaticBlock {
    static int a = 4;
    static int b;

    // This static block runs only ONCE when the class is loaded
    static {
        System.out.println("I am in static block");
        b = a * 5; // b = 4 * 5 = 20
    }

    public static void main(String[] args) {
        StaticBlock obj = new StaticBlock(); // Line where class is loaded (if not already)
        System.out.println(StaticBlock.a + " " + StaticBlock.b); // 4 20

        StaticBlock.b += 3; // b = 20 + 3 = 23

        System.out.println(StaticBlock.a + " " + StaticBlock.b); // 4 23

        StaticBlock obj2 = new StaticBlock(); // No static block runs here
        System.out.println(StaticBlock.a + " " + StaticBlock.b);
           System.out.println(StaticBlock.a + " " + StaticBlock.b);

    }
}
