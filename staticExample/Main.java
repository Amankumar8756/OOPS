package staticExample;

public class Main {
    public static void main(String[] args) {
        Human aman = new Human(22, "Aman", 50000, false);

         Human mota = new Human(23, "mata", 100000, true);

        System.out.println(aman.name);
        System.out.println(aman.age);
        System.out.println(aman.salary);
        System.out.println(aman.married); 

        System.out.println(Human.population);
           System.out.println(Human.population);

    }
}