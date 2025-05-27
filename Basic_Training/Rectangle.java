public class Rectangle 
{
    private double length;
    private double width;
    
    public Rectangle(double length, double width) 
    {
        this.length = length;
        this.width = width;
    }
    public Rectangle(Rectangle rect) 
    {
        this.length = rect.length;
        this.width = rect.width;
    }
    public double calculateArea() 
    {
        return length * width;
    }
    
    public void displayArea() 
    {
        System.out.println("Area of Rectangle: " + calculateArea());
    }
    public void display() 
    {
        System.out.println("Length: " + length + ", Width: " + width);
    }
    public static void main(String[] args) 
    {
        Rectangle rect = new Rectangle(5.0, 3.0);
        Rectangle rectCopy = new Rectangle(rect); 
        rect.display();
        rect.displayArea();
        rectCopy.display();
        rectCopy.displayArea(); 
    }   
}
