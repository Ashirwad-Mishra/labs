package Access_Modifier;

class Default_members {
    int val1;
    int val2;

    Default_members(int val1 , int val2)
    {
        this.val1 = val1;
        this.val2 = val2;
    }

    int get_val1()
    {
        return val1;
    }
    int get_val2()
    {
        return val2;
    }

    public static void main(String[] args) {
        Default_members D = new Default_members(15 , 15);

        System.out.println(D.get_val1() + D.get_val2());
    }
}
