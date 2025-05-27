public class Student {
    private int id;
    private int age;
    private String name;

    // Constructor with all parameters
    public Student(int id, String name, int age) 
    {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    // Constructor with id and name only
    public Student(int id, String name) 
    {
        this.id = id;
        this.name = name;
        this.age = -1; 
    }

    // Method to display student details
    public void display() 
    {
        if (age != -1)
            System.out.println("The id of " + name + " is " + id + " and he is " + age + " years old.");
        else
            System.out.println("The id of " + name + " is " + id + " and age is not specified.");
    }
}