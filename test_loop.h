

for (shotit=(*firstlist).begin(); shotit!=(*firstlist).end(); shotit++)
        {
        for (hitit=(*secondlist).begin(); hitit!=(*secondlist).end(); hitit++)
            {
            
            Cor a= sumcor (&(((*shotit)->root)->pos),&((*shotit)->acc));
            Cor b= sumcor (&(((*hitit)->root)->pos),&((*hitit)->acc));
            Cor sa=((*shotit)->speed);
            Cor sb=((*hitit)->speed);
            
           /* if ((*shotit)->time>(*hitit)->time)
            {
            Cor b=(((*shotit)->root)->pos)+((*shotit)->acc);
            Cor a=(((*hitit)->root)->pos)+((*hitit)->acc);
            Cor sb=((*shotit)->speed);
            Cor sa=((*hitit)->speed);
            }    */ 
            
            #include "test_shapes.h"
            
               
            }
        }
        
        
        
