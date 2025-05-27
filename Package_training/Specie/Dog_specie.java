package Package_training.Specie;

public class Dog_specie 
{
    public String Specie_name;
    public String Specie_color;
    public String Specie_breed;
    
    // Parameterized constructor
    public Dog_specie(String name, String color, String breed) 
    {
        this.Specie_name = name;
        this.Specie_color = color;
        this.Specie_breed = breed;
    }
    // Method to display the values of name, color, and breed

    public void display() 
    {
        System.out.println("Dog Specie Name: " + Specie_name + ", Color: " + Specie_color + ", Breed: " + Specie_breed);
    }
}
