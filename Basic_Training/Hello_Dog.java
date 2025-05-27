public class Hello_Dog {
    private String name;
    private String color;

    // Parameterized constructor
    public Hello_Dog(String name, String color) 
    {
        this.name = name;
        this.color = color;
    }
    // Method to display the values of name and color
    public void display() 
    {
        System.out.println("Dog Name: " + name + ", Color: " + color);
    }
    public static void main(String[] args) 
    {
        // Creating objects of Dog class
        Hello_Dog dog1 = new Hello_Dog("Buddy", "Brown");
        Hello_Dog dog2 = new Hello_Dog("Max", "Black");

        // Calling the display() method
        dog1.display();
        dog2.display();
    }
}
