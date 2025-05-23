#pragma once

#include "GameObject.h"
#include <mfplay.h>

class Image;

class LossLifeScene : public GameObject
{
private:
	Image* bg;
	IMFPMediaPlayer*  pPlayer     = nullptr;

public:

	virtual HRESULT Init() override;
	virtual void Release() override;
	virtual void Update() override;
	virtual void Render(HDC hdc) override;
};

