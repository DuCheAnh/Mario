#ifndef __GLOBAL_VARIABLES_H__
#define __GLOBAL_VARIABLES_H__

#include <d3dx9.h>
#include <directxmath.h>
#include <vector>
#include <string>

#define WINDOW_TITLE L"Super Mario"
#define WINDOW_CLASS_NAME L"Super Mario Bros 3"

#define D3DCOLOR_WHITE D3DCOLOR_XRGB(255, 255, 255)
#define BACKGROUND_COLOR D3DCOLOR_XRGB(181, 235, 242)
//#define BACKGROUND_COLOR D3DCOLOR_XRGB(21,155,65)
// window configuration
#define WINDOW_WIDTH 776 //640 //1920 //768
#define WINDOW_HEIGHT 744 //480 //1020 //672

//camera configuration
#define CAMERA_WIDTH 768
#define CAMERA_HEIGHT 672

#define CELL_WIDTH 388
#define CELL_HEIGHT 372

#define CAMERA_DEFAULT_SCROLLING_SPEED_VX 2.0f
#define CAMERA_DEFAULT_SCROLLING_SPEED_VY 2.0f

//game configuration
#define MAX_FRAME_RATE 180

#define KEYBOARD_BUFFER_SIZE 1024

//game math configuration
#define PI 3.1614f

typedef D3DXVECTOR2 Vector2;
typedef D3DXVECTOR3 Vector3;
#define VectorZero Vector2(0.0f,0.0f);


#define PSWITCH_TIME  10000

#define GAME_TIME 300000

#define DONTCHANGE	-1
#define SMALL		0
#define BIG			1
#define FIRE		2
#define RACOON		3

class Global_Variable
{
	static Global_Variable* _instance;

	int plevel;


	DWORD Ptime_start;

	DWORD Game_time_start;

	DWORD Cycle_time;

public:

	Global_Variable();

	

	void UpdatePmetter(int x);
	int getPmetter();

	

	void startPtime();
	bool isPtimeUp();
	DWORD getPTimeLeft();

	DWORD getGameTimeLeft();
	void startGameTime();

	static Global_Variable* GetInstance();
};

#endif