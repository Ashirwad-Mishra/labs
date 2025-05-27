package Basic_Training;
import Access_Modifier.*;
import Access_Modifier.Protected_members.*;
public class Public_modifier_test {
    public static void main(String[] args) {
        Public_members P = new Public_members(15 , 15);

        System.out.println(P.get_val1() + P.get_val2());
    }
}
