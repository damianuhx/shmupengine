
/*--------------------------------- START MAIN PROGRAMM -----------------------------*/

int WINAPI WinMain(	HINSTANCE	hInstance,			// Instance
					HINSTANCE	hPrevInstance,		// Previous Instance
					LPSTR		lpCmdLine,			// Command Line Parameters
					int			nCmdShow)			// Window Show State
{
	MSG		msg;									// Windows Message Structure
	BOOL	done=FALSE;								// Bool Variable To Exit Loop

	// Ask The User Which Screen Mode They Prefer
	if (MessageBox(NULL,"Would You Like To Run In Full Mode?", "Start FullScreen?",MB_YESNO|MB_ICONQUESTION)==IDNO)
	{
		fullscreen=TRUE;							// Windowed Mode
	}

	// Create Our OpenGL Window
	if (!CreateGLWindow("NeHe's Masking Tutorial",800,600,16,fullscreen))
	{
		return 0;									// Quit If Window Was Not Created
	}


/*------------------------MAIN LOOP----------------------------------*/

	while(!done)									// Loop That Runs While done=FALSE
	{
        
		if (PeekMessage(&msg,NULL,0,0,PM_REMOVE))	// Is There A Message Waiting?
		{
			if (msg.message==WM_QUIT)				// Have We Received A Quit Message?
			{
				done=TRUE;							// If So done=TRUE
			}
			else									// If Not, Deal With Window Messages
			{
				TranslateMessage(&msg);				// Translate The Message
				DispatchMessage(&msg);				// Dispatch The Message
			}
		}
		
		else										// If There Are No Messages
		{
			/*-----------------CORE MAIN LOOP------------------(level, draw)*/
            
            if ((active && !DrawGLScene()) || keys[VK_ESCAPE])	// Active?  Was There A Quit Received? --> main drawing here!!!
			/*--------------------------------------------------*/
            {
				done=TRUE;							// ESC or DrawGLScene Signalled A Quit
			}
			
			else									// Not Time To Quit, Update Screen
			{
            SwapBuffers(hDC);					// Swap Buffers (Double Buffering)
				

				if (keys[VK_F1])						// Is F1 Being Pressed?
				{
					keys[VK_F1]=FALSE;					// If So Make Key FALSE
					KillGLWindow();						// Kill Our Current Window
					fullscreen=!fullscreen;				// Toggle Fullscreen / Windowed Mode
					if (!CreateGLWindow("NeHe's Masking Tutorial",640,480,24,fullscreen))
					{
						return 0;						// Quit If Window Was Not Created
					}
				}
				
			}
		}
	}

	// Shutdown
	KillGLWindow();									// Kill The Window
	return (msg.wParam);							// Exit The Program
};
