
if (fabs(a.z-b.z)<sa.z+sb.z)
{
   
   if (((*shotit)->time==0) && ((*hitit)->time==0))     
   {
     if ( fabs(a.x-b.x) < (sa.x+sb.x))
     {
        if ( fabs(a.y-b.y) < (sa.y+sb.y))
        {
               
               #include "test_hit.h"
               
        }
     }
   }


   else if (((*shotit)->time==1) && ((*hitit)->time==1))     
   {
                                   
   if ( sqrt (pow(a.x-b.x, 2)+ pow(a.y-b.y,2)) < sa.y+sb.x)
      {    
               #include "test_hit.h"
               
      }
   }
   
   else if ((((*shotit)->time==0) && ((*hitit)->time==1) || ((*shotit)->time==1) && ((*hitit)->time==0)))     
   {
        if ( fabs(a.x-b.x) < (sa.x+sb.x))
        {
           if ( fabs(a.y-b.y) < (sa.y+sb.x))
           {
      
               #include "test_hit.h"
               
           }
      }
   }
}
