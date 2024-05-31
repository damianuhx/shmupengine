
struct Cor 
{
    float x;
    float y;
    float z;
    Cor(float cx, float cy, float cz)
    :x(cx), y(cy), z(cz)
        {}
        
    ~Cor()
        {}
};

struct Col
{
    float r,g,b,a;
    Col(float cr, float cg, float cb, float ca)
    :r(cr), g(cg), b(cb), a(ca)
        {}
        
    ~Col()
        {}
};
