package Access_Modifier;

public class Protected_members {
    protected int val1;
    protected int val2;

    protected Protected_members(int val1 , int val2)
    {
        this.val1 = val1;
        this.val2 = val2;
    }

    protected int get_val1()
    {
        return val1;
    }
    protected int get_val2()
    {
        return val2;
    }
}
