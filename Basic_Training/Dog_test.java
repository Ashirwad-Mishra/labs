import Package_training.Specie.*;
import Package_training.*;
public class Dog_test 
{
    public static void main(String[] args) 
    {
        Hello_Dog Kutta = new Hello_Dog("Kutta", "Kaala");
        Dog_specie type = new Dog_specie("Cup Cake", "Laal", "Bullu Kutta");
        Hello_Dog Arvind = new Hello_Dog("Arvind", "Bhurra");
        Kutta.display();
        type.display();
    }
}
