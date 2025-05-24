#include <iostream>
class rectangle 
{
    private : 
    int length;
    int breadth;

    public:
    //mutators
    void set_l(int l);
    void set_b(int b);

    //acessors:-
    int get_l();
    int get_b();

    //facilitators:-
    int area();
    int peri();
};

class cuboid : public rectangle
{
    private: 
    int height;

    public:
    cuboid (int l = 0 , int b = 0, int h = 0)
    {
        height = h;
        set_l(l);
        set_b(b);
    }
    int get_h()
    {
        return height;
    }
    void set_h(int h)
    {
        height = h;
    }
    int volume()
    {
        return get_b()*get_l()*height;
    }
};

void rectangle :: set_l (int l)
{
    if (l>0) length = l;
    else std :: cout << "The length cannot be negative."; 
}
void rectangle :: set_b (int b)
{
    if (b>0) breadth = b;
        else std :: cout << "The breadth cannot be negative." ;
}
int rectangle :: get_l()
{
    return length;
}
int rectangle :: get_b()
{
    return breadth;
}
int rectangle :: area()
{
    return length * breadth;
}
int rectangle :: peri()
{
    return 2 * ( length + breadth );
}

int main()
{
    cuboid C(3,4,5);
    std :: cout << C.get_l() << "\n" << C.volume();
}
