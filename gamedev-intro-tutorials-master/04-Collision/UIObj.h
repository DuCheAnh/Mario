#ifndef __UIOBJ_H__
#define __UIOBJ_H__

#include <unordered_map>

#include "Sprite.h"
#include "Animation.h"
#include "Textures.h"

class UIObj
{
protected:
	D3DXVECTOR2 Position;

	DWORD dt;

	unordered_map<string, LPANIMATION> animation_set;

public:
	UIObj();
	~UIObj();

	void setPosition(D3DXVECTOR2 position);
	D3DXVECTOR2 getPosition();

	void AddAnimation(std::string name, LPANIMATION animation);

	virtual void Update(DWORD dt);

	virtual void Render();
};

typedef UIObj* LPUIOBJECT;
;
#endif