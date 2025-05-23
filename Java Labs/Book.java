public class Book 
{
    String title;
    String author;
    int price;

    // Constructor with parameters
    public Book(String title, String author, int price) 
    {
        this.title = title;
        this.author = author;
        this.price = price;
    }

    // Unparameterized constructor
    public Book() 
    {
        this.title = "Unknown";
        this.author = "Unknown";
        this.price = 0;
    }

    // Setter methods
    public void setTitle(String title) 
    {
        this.title = title;
    }

    public void setAuthor(String author) 
    {
        this.author = author;
    }

    public void setprice(int price) 
    {
        this.price = price;
    }
    // Getter methods
    public String getTitle() 
    {
        return title;
    }
    public String getAuthor() 
    {
        return author;
    }
    public int getprice() 
    {
        return price;
    }
    // Method to display book information
    public void displayInfo() 
    {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("price: " + price);
    }   
}