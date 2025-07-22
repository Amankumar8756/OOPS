class Pen{
    String color;
    String type;

    public void write() {
        System.out.println("writing somthing");
    }
       public void printcolor() {
        System.out.println(this.color);
    }
}


class Student{
    String name;
    int age;

    public void printinfo(){
    System.out.println(this.name);
    System.out.println(this.age);
    }

    Student(String name, int age){
        this.name = name;
        this.age = age;

    
    }
}
public class Ops{
    public static void main(String args[]){

        // Pen pen1 = new Pen();

        // pen1.color ="blue";
        // pen1.type ="gel";

        //  Pen pen2 = new Pen();

        // pen2.color ="black-color";
        // pen2.type ="gel";

        // pen1.write();

        // // System.out.println(pen1.color);
        // // System.out.println(pen1.type);

        // pen1.printcolor();

        // pen2.printcolor();

    //   student-------------
     Student s1 = new Student("aman kumar",22);
    //  s1.name = "Aman kumar";
    //  s1.age = 21;

     s1.printinfo();

    }
}