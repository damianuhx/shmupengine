




list<Object> roots = list<Object>();
list<Object>::iterator rootit;
list<Object*> draws = list<Object*>();
list<Object*>::iterator drawit;

Object* o;
Object* robuffer;

ofstream outfile ("test.txt");

//move
list<Move*>::iterator shotit; 
list<Move*>::iterator hitit; 
list<Move*> shotlist = list<Move*>();
list<Move*> hitlist = list<Move*>();
list<Move*> bulletlist = list<Move*>();
list<Move*> targetlist = list<Move*>();
list<Move*> laserlist = list<Move*>();
//list<Move*>::iterator targetit; 
//list<Move*>::iterator bulletit; 


HDC			hDC=NULL;		// Private GDI Device Context
HGLRC		hRC=NULL;		// Permanent Rendering Context
HWND		hWnd=NULL;		// Holds Our Window Handle
HINSTANCE	hInstance;		// Holds The Instance Of The Application

short TEXTURES = 1000;
GLuint	texture[1000];


bool	keys[256];			// Array Used For The Keyboard Routine
bool	active=TRUE;		// Window Active Flag Set To TRUE By Default
bool	fullscreen=TRUE;	// Fullscreen Flag Set To Fullscreen Mode By Default
bool	masking=TRUE;		// Masking On/Off
bool	mp;					// M Pressed?
bool	sp;					// Space Pressed?
bool	scene;				// Which Scene To Draw
short debug, debug2;
int test1;
short pausecounter=0;

//Konstanten
short MASKNUM = 90;
short TEXNUM = 109;
const short COUNTNUM = 8;
const short BEATNUM = 8;
GLuint	loop;				// Generic Loop Variable

GLfloat	roll;				// Rolling Texture


unsigned int frame, part, setting, step;
unsigned short count[COUNTNUM], beat[BEATNUM], beatminus[BEATNUM];
LRESULT	CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);	// Declaration For WndProc
