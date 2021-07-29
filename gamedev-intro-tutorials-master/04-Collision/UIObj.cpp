#include "UIObj.h"

UIObj::UIObj()
{
	this->Position = D3DXVECTOR2(0, 0);
	dt = 0;
}

UIObj::~UIObj()
{
	animation_set.clear();
}

void UIObj::setPosition(D3DXVECTOR2 position)
{
	this->Position = position;
}

D3DXVECTOR2 UIObj::getPosition()
{
	return this->Position;
}

void UIObj::AddAnimation(std::string name, LPANIMATION animation)
{
	animation_set[name] = animation;
}

void UIObj::Update(DWORD dt)
{
	this->dt = dt;
}

void UIObj::Render()
{

}
