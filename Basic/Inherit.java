
import java.util.*;


class Shape {
    public void area() {
        System.out.println("Displays area");
    }
}

class Triangle extends Shape {
    public void area(int l, int h) {
        System.out.println(0.5 * l * h);  
    }
}

class EquilateralTriangle extends Triangle {
    @Override
    public void area(int l, int h) {
        System.out.println(0.5 * l * h);  
    }
}

class Circle extends Shape {
    public void area(int r) {
        System.out.println(3.14 * r * r);  
    }
}

public class Inherit {
    public static void main(String args[]) {
        Triangle t1 = new Triangle();
        t1.area(10, 5);  // Example usage

        EquilateralTriangle et = new EquilateralTriangle();
        et.area(6, 6);  // Example usage

        Circle c1 = new Circle();
        c1.area(7);  // Example usage
        t1.area();
    }
}