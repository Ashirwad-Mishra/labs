#include<iostream>
class complex 
{
    private:
    int real;
    int img;
    public: 

    //constructor
    complex();
    complex(int r, int i);
    complex (const complex& C);

    //mutator
    void set_r (int r);
    void set_i (int i);

    //acessor
    int get_r() const;
    int get_i() const;

    //facillitator
    friend operator + (complex C1, complex C2);
    friend operator - (complex C1, complex C2);
    friend ostream& operator << (ostream& output , complex& C1);

    //destructor 
    ~complex();
};

complex :: complex ()
{
    std :: cout << "Enter your complex: ";
    int x , y;
    std :: cin >> x >> y;
    set_r(x);
    set_i(y);
}

complex :: complex (int r , int i)
{
    set_r(r);
    set_i(i);
}

complex :: complex (complex &C)
{
    real = C.real;
    img = C.img;
}

void complex :: set_r(int r)
{
    real = r;
}

void complex :: set_i (int i)
{
    img = i;
}

int complex :: get_r() const
{
    return real;
}

int complex :: get_i () const
{
    return img;
}

complex operator + (complex C1, complex C2)
{
    
    complex C;
    C.img = c1.img + C2.img;
    C.img = c1.real + C2.real;
    return C;
}

complex  operator - (complex C1, complex C2)
{
    
    complex C;
    C.img = c1.img - C2.img;
    C.img = c1.real - C2.real;
    return C;
}

ostream& operator << (ostream &output , const complex &C1)
{
    output << c1.real << " + " << c1.img << "i";
    return output;
}

complex :: ~complex()
{
    std :: cout << "The complex has been destroyed.";
}


int main()
{
    return 0;
}