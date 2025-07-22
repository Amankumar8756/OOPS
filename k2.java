// public class k2{
//     public static void main(String[] args){
//      Integer a =10;
//      Integer b =20;
//     swap(a,b);

//     System.out.prntln(a + " " + b);  
//     }

//  static void swap(Integer a, Integer b){
//     Integer temp =a;
//     a =b;
//     b =temp;
//  }
// }


class IntWrapper {
    int value;
    IntWrapper(int value) {
        this.value = value;
    }
}

public class k2 {
    public static void main(String[] args) {
        IntWrapper a = new IntWrapper(10);
        IntWrapper b = new IntWrapper(20);
        
        swap(a, b);

        System.out.println(a.value + " " + b.value);  // Output: 20 10
    }

    static void swap(IntWrapper a, IntWrapper b) {
        int temp = a.value;
        a.value = b.value;
        b.value = temp;
    }
}