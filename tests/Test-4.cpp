class A
{
public:
    virtual int  fcn1(int p1, int p2) const { return p1 * p2; }
    virtual void fcn2(const char* str) = 0;
    virtual void fcn3(bool) {}
    const char*  fcn4() { return "artichaut"; }
};

class B : A
{
public:
    int fcn1(int p1, int p2) { return p1 + p2; }

    void fcn2(const char*) override {}

    void fcn3(bool b)
    {
        if (b)
        {
            A::fcn3(b);
        }
    }
    
    const char* fcn4() { return "sopalin"; }
};

int main()
{
    A* a = new B();

    a->fcn1(1, 3);
    a->fcn2("la la la");
    a->fcn3(false);
    a->fcn4();

    return 0;
}