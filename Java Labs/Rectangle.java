public class Rectangle
{
    private double length;
    private double width;

    // Constructor
    public Rectangle(double length, double width) 
    {
        this.length = length;
        this.width = width;
    }
    // Copy constructor
    public Rectangle(Rectangle other) 
    {
        this.length = other.length;
        this.width = other.width;
    }

    // Method to calculate area
    public double calculateArea() 
    {
        return length * width;
    }

    // Method to calculate perimeter
    public double calculatePerimeter() 
    {
        return 2 * (length + width);
    }

    // Method to display rectangle information
    public void displayInfo() 
    {
        System.out.println("Length: " + length);
        System.out.println("Width: " + width);
        System.out.println("Area: " + calculateArea());
        System.out.println("Perimeter: " + calculatePerimeter());

        System.out.println();
        System.out.println();
    }
}
