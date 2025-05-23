public class Person1 
{
    String name;
    int age;
    
    public Person1(String name, int age) 
    {
        this.name = name;
        this.age = age;
    }
    
    public void display()
    {
        System.out.println("The Name: " + this.name);
        System.out.println("The age: " + this.age);

        System.out.println();
        System.out.println();
    }
}
