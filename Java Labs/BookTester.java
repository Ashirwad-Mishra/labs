public class BookTester 
{
    public static void main(String[] args) 
    {
        Book book1 = new Book("The Great Gatsby", "F. Scott Fitzgerald", 10);
        book1.displayInfo();
        
        Book book2 = new Book();
        book2.setTitle("To Kill a Mockingbird");
        book2.setAuthor("Harper Lee");
        book2.setprice(15);
        book2.displayInfo();
    }
}
