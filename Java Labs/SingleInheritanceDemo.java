public class SingleInheritanceDemo 
{
    public static void main(String[] args) 
    {
        Dog d = new Dog();
        d.sound();  // inherited from Animal
        d.bark();   // defined in Dog
    }
}