
#ifndef __SPRITE_BASE_H__
#define __SPRITE_BASE_H__

#include "cocos2d.h"

class SpriteBase : public cocos2d::Sprite
{
private:
	bool m_bValid;
	int m_nSpriteKind;
public:
	SpriteBase(float w, float h, std::string path);
	bool isValid() { return m_bValid; }
	int spriteKind() { return m_nSpriteKind; }
	void SetSpriteKind(int kind);
	virtual void reset();
};

#endif // __SPRITE_BASE_H__
