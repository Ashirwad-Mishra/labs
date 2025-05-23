public class person2Tester {
    public static void main(String[] args) 
    {
        person2 p1 = new person2("John", 25, "USA");
        person2 p2 = new person2();
        p2.setName("Jane");
        p2.setAge(30);
        p2.setCountry("Canada");
        
        p1.display();
        p2.display();
    }
}
