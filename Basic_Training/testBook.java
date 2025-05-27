public class testBook
{
    public static void main(String[] args)
    {
        Book b1 = new Book("Java Bible" , "James Gosling" , 1000);
        Book b2 = new Book ("Lets C" , "Yashwant Kanetkar");
        b1.display();
        b2.display();
    }
}