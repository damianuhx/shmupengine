#ifndef OBJEKT_H // if not defined
#define OBJEKT_H // define MyHeader
//object

class Object
{
    public:
    Cor pos, rot, size;     
    short state, power, health, ext;
    short picfile, shape;
    Object* root;
    float texturex, texturey; 
    float texoffx, texoffy;
    
    
    list<Move> moves;
    list<Col> colors;
    list<Col> lights;
    list<Cor> others;
    list<Object> objects;
    
    list<Move>::iterator moveit;
    list<Col>::iterator colorit;
    list<Col>::iterator lightit;
    list<Cor>::iterator otherit;
    list<Object>::iterator objectit;
      

    Object* Object::getroot()
    {
    return root;
    }
    
    void addmove(Move cmove)
    {
        moves.push_back(cmove);
    }
    
    
    void addcol(Col ccol)
    {
        colors.push_back(ccol);
    }
    
    void addother(Cor ccor)
    {
        others.push_back(ccor);
    }
    
    void addlight(Col ccol)
    {
        lights.push_back(ccol);
    }
    
    void prg();
     
    Object( Object* croot, short cstate, short cpower, short chealth,
            Cor cpos, Cor crot, 
            int cpicfile, int cshape, 
            Cor csize, float ctexturex, float ctexturey)
      
:root(croot), picfile(cpicfile), shape(cshape), size(csize), texturex(ctexturex), texturey(ctexturey),
state(cstate), power(cpower), health(chealth), pos(cpos), rot(crot)
   {
            colors = list<Col>();
            others = list<Cor>();
            moves  = list<Move>();
            ext = 0;
            texoffx=0.0f;
            texoffy=0.0f;
            robuffer=this;
    }
    
    
};

void Object::prg()
    {
    
        for (moveit=moves.begin(); moveit!=moves.end(); moveit++)
        {
            (*moveit).prg();
        }
        
        //draws.push_back(this);
       
       
       drawit=draws.begin();
       while (drawit!=draws.end() && pos.z<(**drawit).pos.z)
        {
            drawit++;
        }
        
        draws.insert(drawit, this);
        
        for (objectit=objects.begin(); objectit!=objects.end(); objectit++)
        {
            (*objectit).prg();   
        }
    } 

#endif


