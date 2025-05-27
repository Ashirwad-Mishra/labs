package Package_training;

public class Dog {
    private String name;
    private String color;

    // Parameterized constructor
    public Dog(String name, String color) 
    {
        this.name = name;
        this.color = color;
    }
    // Method to display the values of name and color
    public void display() 
    {
        System.out.println("Dog Name: " + name + ", Color: " + color);
    }
}
