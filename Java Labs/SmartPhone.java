public class SmartPhone {
    String brand;
    String model;
    int storage;

    public SmartPhone(String brand, String model, int storage) 
    {
        this.brand = brand;
        this.model = model;
        this.storage = storage;
    }
    // unparameterized constructor
    public SmartPhone() 
    {
        this.brand = "Unknown";
        this.model = "Unknown";
        this.storage = 0;
    }
    public void increaseStorage(int additionalStorage) 
    {
        this.storage += additionalStorage;
    }
    public void brand_set(String brand) 
    {
        this.brand = brand;
    }
    public void model_set(String model) 
    {
        this.model = model;
    }
    public void storage_set(int storage) 
    {
        this.storage = storage;
    }
    public void displayInfo() {
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Storage: " + storage + "GB");
    }
}
