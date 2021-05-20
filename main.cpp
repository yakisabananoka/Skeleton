#include <DxLib.h>

void Update(void);
void Draw(void);

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	SetWindowText("2016029_ŒÃ–ì—T–ç");
	SetGraphMode(640, 480, 32);
	SetOutApplicationLogValidFlag(false);
	ChangeWindowMode(true);

	if (DxLib_Init() == -1)
	{
		return -1;
	}

	while (!ProcessMessage())
	{
		Update();
		Draw();
	}

	DxLib_End();
	return 0;
}

void Update(void)
{
}

void Draw(void)
{
	SetDrawScreen(DX_SCREEN_BACK);
	ClsDrawScreen();

	ScreenFlip();
}
