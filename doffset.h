glTranslatef(o->pos.x*1.0f,o->pos.y*1.0f,(o->pos.z*-1.0f)-3.0f);					// Translate Into The Screen One Unit
	glRotatef(o->rot.z*1.0f, 0.0f,0.0f,1.0f);	
    glRotatef(o->rot.x*1.0f,1.0f,0.0f,0.0f);	
    glRotatef(o->rot.y*1.0f,0.0f,1.0f,0.0f);				// Rotate On The Z Axis 360 Degrees.
	
