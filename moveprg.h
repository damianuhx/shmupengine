/*Move(Object* croot, int ctype, Cor cspeed, Cor cacc, int ctime, 
int ccounter, int ctech0, int ctech1, int ctech2)
        */


void Move::prg()
{
     
     /*10: basics: 
     delete when outside screen
     delete when no health
     */
     if (type==10)
     {
     if ((root->pos.y>2.5f) || (root->pos.y  < -2.5f)) {root->state=0;}
     if ((root->pos.x>2.5f) || (root->pos.x < -2.5f)) {root->state=0;}
     if (root->health<0) {root->state=0;}
     }
     
     //11: speed & acceleration (normal)
     if (type==11)
     {
        root->pos.x+=speed.x;
        root->pos.y+=speed.y;
        root->pos.z+=speed.z;
    
        speed.x+=acc.x;
        speed.y+=acc.y;
        speed.z+=acc.z;
    }
    
    //12: speed & acceleration (circle)
    //13: scrolling & zoom of texture (normal)
    //14: shoot simple(normal)
    //15: shoot simple(circle)
    //16: shoot pattern (normal)
    //17: shoot pattern (circle)
    
    
    
    if (type==1)
    {
            root->pos.x+=speed.x;
            root->pos.y+=speed.y;
            root->pos.z+=speed.z;
         
         if (root->pos.z<3.5f)
         {
         speed.z*=0.99;
         }
                               
         if (tech0==0)
         {
            if ((root->pos.y>2.5f) || (root->pos.y  < -2.5f)) {root->state=0;}
            if ((root->pos.x>2.5f) || (root->pos.x < -2.5f)) {root->state=0;}
            if (root->health<0) {root->state=0;}
            }
            
    }
    
    else if (type==2)
    {
         if (keys['D'])
         {
        root->pos.x+=0.01;
        }
        
        if (keys['A'])
         {
        root->pos.x-=0.01;
        }
        
        if (keys['S'])
         {
        root->pos.y-=0.01;
        }
        
        if (keys['W'])
         {
        root->pos.y+=0.01;
        }
        
        if (keys['R'])
         {
        root->pos.z+=0.01;
        }
        
        if (keys['F'])
         {
        root->pos.z-=0.01;
        }
        
        if (keys[' '])
         {
         
                       
         if (tech0==0)
         {
         gegner(4, 0, 0, 0, 0,0,0,0,0,0,0,
Cor(root->pos.x, root->pos.y, root->pos.z-0.005), Cor(0,0.00,0), Col(1,1,1,1));
         }
         
         if (tech0++>10)
         {
          tech0=0;
         }
         
         
         }
  
        
    }
    else if (type==3)
    {
         /*
         timer: art (1:kreis, 0:rechteck, 2: rechteck mit schieflage)
         counter: health abzug
         tech0: 1:stabil oder 0:treffbar
         tech1: hit, shot, target, bullet, laser?
         tech2: ext
         */
         
             if (tech1==1)
             {
             hitlist.push_back(this);
             }
             
             if (tech1==2)
             {
             shotlist.push_back(this);
             }
     
             if (tech1==3)
             {
             bulletlist.push_back(this);
             }
             
             if (tech1==4)
             {
             targetlist.push_back(this);
             }
             if (tech1==5)
             {
             laserlist.push_back(this);
             }
    }
    
    
else if (type==4)
    {
        
    if (counter++>time)
    {
gegner(5, 0,0,0,0,0,0,0,0,0,0,
Cor(root->pos.x-0.08, root->pos.y-0.25, root->pos.z), Cor(0.00001*(float)(rand()%1000)-0.005, -0.01, 0), Col(1,1,1,1));  
counter=-50;                    
}
    }
    
else if (type==5)
    {
        
    if (root->ext-- >0)
    {
                    if (root->lights.begin()!=root->lights.end())
                    {
(root->lights).front() = Col( float((root->ext))/100 , 0.0, 0.0, 1.0);    
}
           
}
    }
    
    


else if (type==7)
{
     
     if (tech0 !=1)
     {
     tech0--;
     }
     
     if (tech0==1)
     {
                  speed.z*=0.99;
                  }
               
            root->texoffy+=speed.y;
            root->texturey+=speed.z;
            root->texturex+=speed.z;
            root->texoffx-=speed.z/2;
            root->texoffy-=speed.z/2;
            
            
}

else if (type==8)
{
     if (((root->colors).front()).a<=speed.x)
     {
            ((root->colors).front()).a+=0.005;
            }
}


};










short Move::compare(Move* cmove)
{
     /* if ( 
((this->pos.x)-(cmove->pos.x))*/
 };
