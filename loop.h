/*procedure bookmark { */     

int DrawGLScene(GLvoid)									// Here's Where Wef Do All The Drawing
{
pausecounter--;
if (keys['M'])
         {
              if (pausecounter<0)
              {
              if (masking==TRUE)
              {
               masking=FALSE;
               pausecounter=10;
              }
              else
              {
              masking=TRUE;
              pausecounter=10;
              }
              
              }
        }

if (masking==TRUE)
{
    level();
    
    for (rootit=roots.begin(); rootit!=roots.end(); rootit++)
    {
        (*rootit).prg();
    }
}
    
    
    #include "test.h"
            
    
    
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Clear The Screen And The Depth Buffer
	glLoadIdentity();									// Reset The Modelview Matrix
    


/*main loop bookmark{ */
       for (drawit=draws.begin(); drawit!=draws.end(); drawit++)
       {  
          o=*drawit;
          glLoadIdentity();

          /*falls shape 1-100) { */
          if(o->shape>0 && o->shape<101)
          {
              #include "doffset.h"
	          o->colorit=o->colors.begin();
 		
		
        
              /*mit oder ohne texturen*/
              if (o->picfile>0)
		      {
                 glEnable(GL_TEXTURE_2D);               // Select The Second Image Texture	
              }
              else
              {
                  glDisable(GL_TEXTURE_2D);
              }
		
		
		      /*maske (nur für bilder nötig, nicht für polygone oder texturen*/
		      if (o->picfile>0 && o->picfile<MASKNUM)
		      {
                  glBindTexture(GL_TEXTURE_2D, texture[o->picfile]);
                  glBlendFunc(GL_ZERO, GL_ONE_MINUS_SRC_COLOR);
		          glColor4f((o->colorit)->a, (o->colorit)->a, (o->colorit)->a, 1);
                  //glBlendFunc(GL_ONE, GL_ONE);
                  //gegner(1, Cor(  0.005*(rand()%1000)-2.5,2.0f,0), Cor(0,-0.03,0));
		          if (o->shape==1)
		          {
                      glBegin(GL_QUADS);	
                      #include "dcbl.h"
                      #include "dalpha.h"
                      #include "dcbr.h"
                      #include "dalpha.h"
                      #include "dctr.h"
                      #include "dalpha.h"
                      #include "dctl.h"
                      glEnd();
                  }
        
                  if (o->shape==2)
		          {
                      glBegin(GL_TRIANGLES);		
                      #include "dcbl.h"
                      #include "dalpha.h"
                      #include "dcbr.h"
                      #include "dalpha.h"
                      #include "dctr.h"
                      glEnd();	
                  }
              }
       /*********************/
		
           							
  
	
	              /*if ((o->others.front()).x>0||(o->others.front()).y>0||(o->others.front()).z>0)
	              {
                  glBlendFunc(GL_ONE, GL_ONE);					// Copy Image 2 Color To The Screen
		          glBindTexture(GL_TEXTURE_2D, texture[o->picfile]);		// Select The Second Image Texture	
		          glColor4f( (o->others.front()).x, (o->others.front()).y, (o->others.front()).z, 1);
		
		          //quAd&triangle                                               
                  }*/
	
	
    {	
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        if (o->picfile>0 && o->shape<100 && o->picfile<MASKNUM){glBlendFunc(GL_ONE, GL_ONE);}			                    
		glBindTexture(GL_TEXTURE_2D, texture[(o->picfile)+1]);		
		#include "dcolorbegin.h"
		if (o->shape==1)
		{
        glBegin(GL_QUADS);
        #include "dcbl.h"
        #include "dcolornext.h"
        #include "dcbr.h"
        #include "dcolornext.h"
        #include "dctr.h"
        #include "dcolornext.h"
        #include "dctl.h"
        glEnd();
        }	
        
        if (o->shape==2)
		{
        glBegin(GL_TRIANGLES);
        #include "dcbl.h"
        #include "dcolornext.h"
        #include "dcbr.h"
        #include "dcolornext.h"
        #include "dctr.h"
        glEnd();
        }
        
        //hier light drawing
        
        
      
      
      
      
      if (o->picfile>0 && o->shape<101){glBlendFunc(GL_ONE, GL_ONE);}			                    
		glBindTexture(GL_TEXTURE_2D, texture[(o->picfile)]);		
		#include "dlightbegin.h"
		if (o->shape==1)
		{
        glBegin(GL_QUADS);
        #include "dcbl.h"
        #include "dlightnext.h"
        #include "dcbr.h"
        #include "dlightnext.h"
        #include "dctr.h"
        #include "dlightnext.h"
        #include "dctl.h"
        glEnd();
        }	
        
        if (o->shape==2)
		{
        glBegin(GL_TRIANGLES);
        #include "dcbl.h"
        #include "dlightnext.h"
        #include "dcbr.h"
        #include "dlightnext.h"
        #include "dctr.h"
        glEnd();
        }
        
        //hier light drawing
        
        //#include "system.h"
        glEnd();
      }
        
        /*if (o->shape==2)
		{
        glBegin(GL_TRIANGLES);		
        glTexCoord2f(0.0f, 0.0f); glVertex3f(o->size.x*-1.0f, o->size.y*-1.0f,  0.0f);	// Bottom Left
		if (++(o->colorit)!=o->colors.end()){glColor4f((o->colorit)->r, (o->colorit)->g, (o->colorit)->b, (o->colorit)->a);}
        glTexCoord2f(o->texturex*1.0f, 0.0f); glVertex3f( o->size.x*1.0f, o->size.y*-1.0f,  0.0f);	// Bottom Right
		glTexCoord2f(o->texturex*1.0f, o->texturey*1.0f); glVertex3f( 0,  o->size.y*1.0f,  0.0f);	// Top Right
		glEnd();	
        }*/
    
     }
}

	/*glEnable(GL_DEPTH_TEST);							// Enable Depth Testing
	glDisable(GL_BLEND);								// Disable Blending
*/

	return TRUE;										// Everything Went OK
}
