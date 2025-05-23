public class SmartPhoneTester {
    public static void main(String[] args) {
        SmartPhone phone1 = new SmartPhone("Apple", "iPhone 14", 128);
        SmartPhone phone2 = new SmartPhone("Samsung", "Galaxy S21", 256);
        SmartPhone phone3 = new SmartPhone();

        // Set properties for the third smartphone
        phone3.brand_set("Google");
        phone3.model_set("Pixel 6");
        phone3.storage_set(128);    
        // Display information about each smartphone
        System.out.println("Smartphone 1:");
        phone1.displayInfo();
        System.out.println();

        System.out.println("Smartphone 2:");
        phone2.displayInfo();
        System.out.println();

        System.out.println("Smartphone 3:");
        phone3.displayInfo();
    }
}
