void gegner(short type, short tech0, short tech1, short tech2, short tech3, short tech4, short tech5, short tech6, short tech7, short tech8, short tech9, Cor pos, Cor speed, Col col)
{
            
            /*Object( Object* croot, short cstate, short cpower, short chealth,
            Cor cpos, Cor crot, 
            int cpicfile, int cshape, 
            Cor csize, float ctexturex, float ctexturey)*/
    
    
    /*shape:
            1: 
            /*Move(Object* croot, int ctype, Cor cspeed, Cor cacc, int ctime, int ccounter, 
            int ctech0, int ctech1, int ctech2)*/
    
    /*
         timer: art (1:kreis, 0:rechteck, 2: rechteck mit schieflage)
         counter: health abzug
         tech0: 1:stabil oder 0:treffbar
         tech1: hit, shot, target, bullet, laser?
         tech2: ext
         */
    /*gegnertypen bookmark*/
    /*type 1: gras?*/
    
    
    //11: depending shootspot (Invisible/visble)
    //12: moving, shooting thing
    
    if (type==1)
       {   
       roots.push_back(Object
       (0, 1, 10, 10,
       pos, Cor((rand()%50),20-(rand()%40),20-(rand()%40)), 
       0, 2, 
       Cor(0.1, 0.8, 0.04), 1.0f,  1.0f));
        
        robuffer=&roots.back();
    
        robuffer->addmove( 
        Move((Object*) robuffer, 1, (Cor)speed, Cor(0, 0, 0), 
        0, 0, 0, 0,0));
        
        //robuffer->addcol(Col(0,1, 0, 1)); 
        
        //robuffer->addcol(Col(rand()%2,rand()%2, rand()%2, 1));   
        //robuffer->addcol(Col(0,0.0,0.0,1));
        //robuffer->addcol(Col(rand()%2,rand()%2, rand()%2, 1));   
        
      
      robuffer->addcol(Col(0, 0.2, 0.1, 1));       
      robuffer->addcol(Col(0,1,0,1));
      robuffer->addcol(Col(0,0.2,0.3,1));
      
      robuffer->addother(Cor(0,0,0));
      }  
      
    /*type 2*/ 
    else if (type==2)
       {
       roots.push_back(Object
       (0, 1, 10, 100,
       pos, Cor(0,0,0), 
       1, 1, 
       Cor(0.3, 0.3, 0.1), 1.0f,  1.0f));
        
        robuffer=&roots.back();
    
        robuffer->addmove( 
        Move((Object*) robuffer, 1, (Cor)speed, Cor(0, 0, 0), 
        0, 0, 0, 0,0));
        
        robuffer->addmove( 
        Move((Object*) robuffer, 3, Cor(0.12, 0.12, 0.5) , Cor(0.0, -0.15, 0), 
        0, 5, 0, 4,100)); 
  
  robuffer->addmove( 
        Move((Object*) robuffer, 4, Cor(0.0, 0.01, 0.0), Cor(0, 0, 0), 
        50, 0, 0, 0,0));
        
        robuffer->addmove( 
        Move((Object*) robuffer, 5, Cor(0.0, 0.01, 0.0), Cor(0, 0, 0), 
        100, 0, 0, 0,0));
        
        robuffer->addcol(Col(rand()%2,rand()%2, rand()%2, 0.1*(rand()%11)));    
        robuffer->addlight(Col(0,0,0, 0));  
       }
       
       
       else if (type==3)
       {
       roots.push_back(Object
       (0, 1, 10, 100,
       pos, Cor(0,0,0), 
       5, 1, 
       Cor(0.3, 0.3, 0.1), 1.0f,  1.0f));
        
        robuffer=&roots.back();
    
        robuffer->addmove( 
        Move((Object*) robuffer, 2, Cor(0, 0, 0) , Cor(0, 0, 0), 
        0, 8, 0, 4,0));
        
        robuffer->addmove( 
        Move((Object*) robuffer, 3, Cor(0.01, 0.01, 0.5) , Cor(0, 0, 0), 
        1, 8, 0, 1, 100)); 
        
        robuffer->addmove( 
        Move((Object*) robuffer, 5, Cor(0.0, 0.01, 0.0), Cor(0, 0, 0), 
        50, 0, 0, 0,100));
        
        /*robuffer->addmove( 
        Move((Object*) robuffer, 3, Cor(1.0, 1.0, 1.0) , Cor(0, 0, 0), 
        0, 0, 2, 2,3));*/
        
        
      robuffer->addcol(Col(1,1,1,1));   
      robuffer->addlight(Col(0,0,0, 0));  
            
       }
       
       
       else if (type==4)
       {
       roots.push_back(Object
       (0, 1, 10, 1,
       pos, Cor(0,0,180), 
       7, 1, 
       Cor(0.1, 0.1, 0.1), 1.0f,  1.0f));
        
        robuffer=&roots.back();
    
        robuffer->addmove( 
        Move((Object*) robuffer, 1, Cor(0, 0.05, 0) , Cor(0, 0, 0), 
        0, 0, 0, 0,0));
        
        robuffer->addmove( 
        Move((Object*) robuffer, 3, Cor(0.02, 0.1, 0.1) , Cor(0, 0, 0), 
        0, 8, 0, 2, 100)); 
        
        
      robuffer->addcol(Col(1,1,1,1));    
      robuffer->addlight(Col(0,0,0, 0)); 
       }
       
       else if (type==5)
       {
       roots.push_back(Object
       (0, 1, 10, 100,
       pos, Cor(0,0,0), 
       9, 1, 
       Cor(0.06, 0.06, 0.5), 1.0f,  1.0f));
        
        robuffer=&roots.back();
    
        robuffer->addmove( 
        Move((Object*) robuffer, 1, (Cor)speed, Cor(0, 0, 0), 
        0, 0, 0, 0,0));
        
        robuffer->addmove( 
        Move((Object*) robuffer, 3, Cor(0.05, 0.05, 0.5) , Cor(0.0, 0, 0), 
        0, 5, 0, 3,100)); 
        
        robuffer->addcol(Col(1,1,1,1));
        robuffer->addlight(Col(0,0,0, 0));  
       }
       
       
       
       else if (type==6)
       {   
       roots.push_back(Object
       (0, 1, 10, 100,
       pos, Cor(0,0,0), 
       tech0, 1, 
       Cor(10.0, 10.0, 5.0), 0.1f*tech3, 0.1f*tech2));
       
       robuffer=&roots.back();
       
      // robuffer->mask=tech1;
       robuffer->addmove( 
        Move((Object*) robuffer, 7, (Cor)speed, Cor(0, 0, 0), 
        0, 0, tech4, tech4,0));
        
        if(tech1==1)
        {
        robuffer->addmove( 
        Move((Object*) robuffer, 8, Cor((((float)tech5)/100),0,0), Cor(0, 0, 0), 
        0, 0, 1, 0,0));
        }
        
        robuffer->addcol(col);
        robuffer->addlight(Col(0,0,0, 0));  
        
       }
       
       else if (type==7)
       {   
       roots.push_back(Object
       (0, 1, 10, 100,
       pos, Cor(0,0,0), 
       tech0, 1, 
       Cor(2.0, 2.0, 5.0), 1.0f, 1.0f));
       
       robuffer=&roots.back();
       
       robuffer->addmove( 
        Move((Object*) robuffer, 1, (Cor)speed, Cor(0, 0, 0), 
        0, 0, 1, 0,0));
        
        robuffer->addcol(col);
        robuffer->addlight(Col(0,0,0, 0));   
        
       }
       
       
       else if (type==9)
       {   
       roots.push_back(Object
       (0, 1, 10, 100,
       pos, Cor(0,0,0), 
       15, 1, 
       Cor(1.5, 1.5, 0.0), 1, 1));
       
       robuffer=&roots.back();
       
      // robuffer->mask=tech1;
      robuffer->addmove( 
        Move((Object*) robuffer, 8, (Cor)speed, Cor(0, 0, 0), 
        0, 0, 1, 0,0));
        
        robuffer->addmove( 
        Move((Object*) robuffer, 1, (Cor)speed, Cor(0, 0, 0), 
        0, 0, tech0, 0,0));
        
        robuffer->addcol(col);
        robuffer->addlight(Col(0,0,0, 0));  
        
       }
       
       
       
};

