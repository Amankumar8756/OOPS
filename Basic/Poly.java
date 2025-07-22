class Student{

    String name;

    int age;


 // ploymorphisum---------------

    public void printinf(String name){
        System.out.println(name);
    }

       public void printinf(int age){
        System.out.println(age);
    }

       public void printinf(String name ,int age){
        System.out.println(name + " " + age);
    }
}

public class Poly{
    public static void main(String args[]){
        Student s1 = new Student();
        s1.name = "madam ji";
        s1.age = 24;

        s1.printinf(s1.name, s1.age);
    }
}