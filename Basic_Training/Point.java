public class Point {
    private double x;
    private double y;

    public Point(double x, double y) 
    {
        this.x = x;
        this.y = y;
    }

    public Point(Point p) 
    {
        this.x = p.x;
        this.y = p.y;
    }

    public double calculateDistance() 
    {
        return Math.sqrt(x * x + y * y);
    }

    public void displayDistance() 
    {
        System.out.println("Distance from origin: " + calculateDistance());
    }

    public void display() 
    {
        System.out.println("Point coordinates: (" + x + ", " + y + ")");
    }

    public static void main(String[] args) 
    {
        Point p1 = new Point(3.0, 4.0);
        Point p2 = new Point(p1); // Copy constructor
        p1.display();
        p1.displayDistance();
        p2.display();
        p2.displayDistance();
    }
}
