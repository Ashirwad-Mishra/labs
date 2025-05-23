public class DoubleInheritanceDemo {
    public static void main(String[] args) {
        Car c = new Car();
        c.startEngine();   // from Engine interface
        c.accelerate();    // from Vehicle class
    }
}