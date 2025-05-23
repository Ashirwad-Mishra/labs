public class RectangleTester 
{
    public static void main(String[] args) 
    {
        Rectangle rect1 = new Rectangle(5.0, 3.0);
        rect1.displayInfo();
        
        Rectangle rect2 = new Rectangle(rect1);
        rect2.displayInfo();
        
        rect1 = new Rectangle(7.0, 4.0);
        rect1.displayInfo();
        
        rect2.displayInfo();
    }
    
}
