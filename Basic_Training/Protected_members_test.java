package Basic_Training;
import Access_Modifier.*;
public class Protected_members_test {
    public static void main(String[] args) {
        Access_Modifier.Protected_members P = new Access_Modifier.Protected_members(15 , 15);

        System.out.println(P.get_val1() + P.get_val2());
    }
    
}
// The above code will not compile because the constructor of the class Protected_members is protected and cannot be accessed from outside its package.