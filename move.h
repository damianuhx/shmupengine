#ifndef MOVE_H // if not defined
#define MOVE_H // define MyHeader

class Object;

class Move
{
    public: 
    short type;
    Cor speed, acc;
    float techf;
    int time, counter;
    short tech0, tech1, tech2; 
    Object* root;
    
    Move(Object* croot, int ctype, Cor cspeed, Cor cacc, int ctime, int ccounter, int ctech0, int ctech1, int ctech2)
        :root(croot), type(ctype), speed(cspeed), acc(cacc), time(ctime), counter(ccounter), 
        tech0(ctech0), tech1(ctech1), tech2(ctech2)
        {
        }
    void prg();
    short compare(Move* cmove);

};


#endif
