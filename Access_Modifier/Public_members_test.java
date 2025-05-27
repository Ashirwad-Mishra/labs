package Access_Modifier;
import Access_Modifier.Public_members;
public class Public_members_test {
    public static void main(String[] args) {
        Public_members obj = new Public_members(10, 20);
        System.out.println("Value 1: " + obj.get_val1());
        System.out.println("Value 2: " + obj.get_val2());
    }
    // The above code will compile and run successfully because the constructor and methods of the class Public_members are public and can be accessed from outside its package.    
}
