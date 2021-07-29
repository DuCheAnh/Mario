#ifndef __PMETTER_H__
#define __PMETTER_H__


#include "UIObj.h"
#include "Sprite.h"

class PMetter :
	public UIObj
{
private:
	void LoadAnimation();

	LPSPRITE ArrowOn, ArrowOff, P_On, P_Off;
public:
	PMetter();
	~PMetter();

	void Update(DWORD dt);

	void Render();
};

#endif