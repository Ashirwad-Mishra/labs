public class InnerStudent 
{
    public static void main(String[] args) 
    {
        Student s1 = new Student(187, "Joe Thakur", 17);
        Student s2 = new Student(762, "Mukesh Kumar");
        s1.display();
        s2.display();
        // s2.age = 18;
        s2.display();
    }
}