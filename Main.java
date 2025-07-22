
import packages.utils.helper;
import packages.utils.temp;

import packages.utils.Hello; 

public class Main {
    public static void main(String[] args) {

        helper.sayHello();                    // from custom package
       temp.sayHi(); 
       Hello.sayHello(); 
       
    }
}