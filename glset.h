AUX_RGBImageRec *LoadBMP(char *Filename)                // Loads A Bitmap Image
{
        FILE *File=NULL;                                // File Handle
        if (!Filename)                                  // Make Sure A Filename Was Given
        {
                return NULL;                            // If Not Return NULL
        }
        File=fopen(Filename,"r");                       // Check To See If The File Exists
        if (File)                                       // Does The File Exist?
        {
                fclose(File);                           // Close The Handle
                return auxDIBImageLoad(Filename);       // Load The Bitmap And Return A Pointer
        }
        return NULL;                                    // If Load Failed Return NULL
}

int LoadGLTextures()                                    // Load Bitmaps And Convert To Textures
{
    
        int Status=FALSE;                               // Status Indicator
        AUX_RGBImageRec *TextureImage[TEXTURES];            // Create Storage Space For The Textures
        memset(TextureImage,0,sizeof(void *)*TEXTURES);        // Set The Pointer To NULL

        if ((TextureImage[0]=LoadBMP("Data/held_schuss_m.bmp"))	
			&& (TextureImage[1]=LoadBMP("Data/pusteblume256_m.bmp"))
			&& (TextureImage[2]=LoadBMP("Data/pusteblume256.bmp"))
			&& (TextureImage[3]=LoadBMP("Data/stdschuss32_m.bmp"))
			&& (TextureImage[4]=LoadBMP("Data/stdschuss32.bmp")) 
			&& (TextureImage[5]=LoadBMP("Data/schiff1mask.bmp")) 
            && (TextureImage[6]=LoadBMP("Data/schiff1.bmp")) 
            && (TextureImage[7]=LoadBMP("Data/tropfenschussrot_m.bmp")) 
            && (TextureImage[8]=LoadBMP("Data/tropfenschussrot.bmp")) 
            && (TextureImage[9]=LoadBMP("Data/schuss2mask.bmp")) 
            && (TextureImage[10]=LoadBMP("Data/schuss2.bmp")) 
            && (TextureImage[11]=LoadBMP("Data/reisfeldfmask.bmp")) 
            && (TextureImage[12]=LoadBMP("Data/reisfeldf.bmp")) 
			&& (TextureImage[13]=LoadBMP("Data/wolke1mask.bmp"))
			&& (TextureImage[14]=LoadBMP("Data/wolke7.bmp")) 
			&& (TextureImage[15]=LoadBMP("Data/pilzmask.bmp")) 
            && (TextureImage[16]=LoadBMP("Data/pilz.bmp")) 
            && (TextureImage[17]=LoadBMP("Data/change.bmp")) 
            && (TextureImage[18]=LoadBMP("Data/changemask.bmp")) 
            && (TextureImage[19]=LoadBMP("Data/empty.bmp"))
            && (TextureImage[20]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[21]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[22]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[23]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[24]=LoadBMP("Data/empty.bmp")) 
			&& (TextureImage[25]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[26]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[27]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[28]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[29]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[30]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[31]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[32]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[33]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[34]=LoadBMP("Data/empty.bmp")) 
			&& (TextureImage[35]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[36]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[37]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[38]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[39]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[40]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[41]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[42]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[43]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[44]=LoadBMP("Data/empty.bmp")) 
			&& (TextureImage[45]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[46]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[47]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[48]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[49]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[50]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[51]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[52]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[53]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[54]=LoadBMP("Data/empty.bmp")) 
			&& (TextureImage[55]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[56]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[57]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[58]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[59]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[60]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[61]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[62]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[63]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[64]=LoadBMP("Data/empty.bmp")) 
			&& (TextureImage[65]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[66]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[67]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[68]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[69]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[70]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[71]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[72]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[73]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[74]=LoadBMP("Data/empty.bmp")) 
			&& (TextureImage[75]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[76]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[77]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[78]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[79]=LoadBMP("Data/empty.bmp"))
            && (TextureImage[80]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[81]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[82]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[83]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[84]=LoadBMP("Data/empty.bmp")) 
			&& (TextureImage[85]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[86]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[87]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[88]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[89]=LoadBMP("Data/empty.bmp"))  
            && (TextureImage[90]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[91]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[92]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[93]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[94]=LoadBMP("Data/empty.bmp")) 
			&& (TextureImage[95]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[96]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[97]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[98]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[99]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[100]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[101]=LoadBMP("Data/sonne.bmp")) 
            && (TextureImage[102]=LoadBMP("Data/nebel.bmp")) 
            && (TextureImage[103]=LoadBMP("Data/wolkendecke.bmp"))
			&& (TextureImage[104]=LoadBMP("Data/grast.bmp")) 
			&& (TextureImage[105]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[106]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[107]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[108]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[109]=LoadBMP("Data/empty.bmp")) 
            
            )	// Second Image
            
            /*für spätere copy paste arbeit ;)
            && (TextureImage[0]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[1]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[2]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[3]=LoadBMP("Data/empty.bmp"))
			&& (TextureImage[4]=LoadBMP("Data/empty.bmp")) 
			&& (TextureImage[5]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[6]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[7]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[8]=LoadBMP("Data/empty.bmp")) 
            && (TextureImage[9]=LoadBMP("Data/empty.bmp")) */
            
            
        {
              
                Status=TRUE;                            // Set The Status To TRUE
                glGenTextures(TEXNUM, &texture[0]);          // Create Five Textures


 
                


				for (loop=0; loop<=TEXNUM; loop++)			// Loop Through All OCC Textures
				{   
                    GLuint pngtext;
                    pngtext  = SOIL_load_OGL_texture("Data/pusteblume256.bmp",SOIL_LOAD_AUTO,
                    SOIL_CREATE_NEW_ID,
				    SOIL_FLAG_POWER_OF_TWO);
                    
                    
                    if( pngtext > 0 )
    {
    	glEnable( GL_TEXTURE_CUBE_MAP );
		glEnable( GL_TEXTURE_GEN_S );
		glEnable( GL_TEXTURE_GEN_T );
		glEnable( GL_TEXTURE_GEN_R );
		glTexGeni( GL_S, GL_TEXTURE_GEN_MODE, GL_REFLECTION_MAP );
		glTexGeni( GL_T, GL_TEXTURE_GEN_MODE, GL_REFLECTION_MAP );
		glTexGeni( GL_R, GL_TEXTURE_GEN_MODE, GL_REFLECTION_MAP );
		glBindTexture( GL_TEXTURE_CUBE_MAP, tex_ID );
		//	report
		std::cout << "the loaded single cube map ID was " << tex_ID << std::endl;
		//std::cout << "the load time was " << 0.001f * time_me << " seconds (warning: low resolution timer)" << std::endl;
    } else
    {
    	std::cout << "Attempting to load as a HDR texture" << std::endl;
		time_me = clock();
		tex_ID = SOIL_load_OGL_HDR_texture(
				load_me.c_str(),
				//SOIL_HDR_RGBE,
				//SOIL_HDR_RGBdivA,
				SOIL_HDR_RGBdivA2,
				0,
				SOIL_CREATE_NEW_ID,
				SOIL_FLAG_POWER_OF_TWO
				| SOIL_FLAG_MIPMAPS
				//| SOIL_FLAG_COMPRESS_TO_DXT
				);
                    
                    
                    /*
                    
                    
	                glBindTexture(GL_TEXTURE_2D, pngtext);
			        glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
				    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
					glTexImage2DGL_TEXTURE_2D, 0, 3, TextureImage[loop]->sizeX, TextureImage[loop]->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage[loop]->data);
				
				
				*/
                }
                
                
                
        }
		for (loop=0; loop<TEXNUM; loop++)						// Loop Through All 5 Textures
		{
	        if (TextureImage[loop])							// If Texture Exists
		    {
			        if (TextureImage[loop]->data)			// If Texture Image Exists
				    {
					        free(TextureImage[loop]->data);	// Free The Texture Image Memory
					}
					free(TextureImage[loop]);				// Free The Image Structure
			}
		}
        return Status;                                  // Return The Status
}

GLvoid ReSizeGLScene(GLsizei width, GLsizei height)		// Resize And Initialize The GL Window
{
	if (height==0)										// Prevent A Divide By Zero By
	{
		height=1;										// Making Height Equal One
	}

	glViewport(0,0,width,height);						// Reset The Current Viewport
	glMatrixMode(GL_PROJECTION);						// Select The Projection Matrix
	glLoadIdentity();									// Reset The Projection Matrix
	gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);	// Calculate Window Aspect Ratio
	glMatrixMode(GL_MODELVIEW);							// Select The Modelview Matrix
	glLoadIdentity();									// Reset The Modelview Matrix
}

int InitGL(GLvoid)										// All Setup For OpenGL Goes Here
{
	if (!LoadGLTextures())								// Jump To Texture Loading Routine
	{
		return FALSE;									// If Texture Didn't Load Return FALSE
	}

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Clear The Background Color To Black
	glClearDepth(1.0);									// Enables Clearing Of The Depth Buffer
	
	glEnable(GL_BLEND);									// Enable Blending
	//glEnable(GL_DEPTH_TEST);							// Enable Depth Testing
 //glDepthMask(GL_TRUE);
	glShadeModel(GL_SMOOTH);							// Enables Smooth Color Shading
	//glEnable(GL_CULL_FACE);
	
	//glEnable(GL_TEXTURE_2D);							// Enable 2D Texture Mapping
	return TRUE;										// Initialization Went OK
}
