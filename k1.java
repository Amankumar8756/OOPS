class Students {
    int rno;
    String name;
    float marks;

    // Default constructor
    Students() {
        this.rno = 13;
        this.name = "Aman Kumar";
        this.marks = 88.5f;
    }

    // Parameterized constructor
    Students(int rno, String name, float marks) {
        this.rno = rno;
        this.name = name;
        this.marks = marks;

        // You can print here if needed
        System.out.println("Parameterized Constructor:");
        System.out.println("Roll No: " + this.rno);
        System.out.println("Name: " + this.name);
        System.out.println("Marks: " + this.marks);
    }

    void changeName(String newName) {
        this.name = newName;
    }
}

public class k1 {
    public static void main(String args[]) {
        // Using default constructor
        Students s1 = new Students();
        System.out.println("Default Constructor:");
        System.out.println("Roll No: " + s1.rno);
        System.out.println("Name: " + s1.name);
        System.out.println("Marks: " + s1.marks);

        // Change name
        s1.changeName("Rahul Sharma");
        System.out.println("Updated Name: " + s1.name);

        // Using parameterized constructor
        Students s2 = new Students(101, "Ravi Kumar", 91.0f);
    }
}