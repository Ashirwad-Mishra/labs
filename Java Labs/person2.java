public class person2 {
    private String name;
    private int age;
    private String country;
    public person2(String name, int age , String country) 
    {
        this.name = name;
        this.age = age;
        this.country = country;
    }
    public person2(String name, int age)
    {
        this.name = name;
        this.age = age;
        this.country = "country";
    }
    
    public person2() 
    {
        this.name = "name";
        this.age = 0;
        this.country = "country";
    }

    public void setName(String name) 
    {
        this.name = name;
    }
    public String getName() 
    {
        return name;
    }
    public void setAge(int age) 
    {
        this.age = age;
    }
    public void setCountry(String country) 
    {
        this.country = country;
    }
    public void display()
    {
        System.out.println("The Name: " + this.name);
        System.out.println("The age: " + this.age);
        System.out.println("The country: " + this.country);
        System.out.println();
        System.out.println();
    }
}
