#include "..\..\..\..\Desktop\PlaneBall\planeBall\plane.h"
#include "..\..\..\..\Desktop\PlaneBall\planeBall\plane.h"
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <graphics.h>


#include "Constant.h"
#include "screen.h"
#include "plane2.0.h"
#include "ball.h"
#define DELTA_TIME 1



void startup() {
	
	screen_init();
	plane_init();

	ball_init();
	BeginBatchDraw();
}



void updateWithoutInput(int dt) {
	ball_update();
}

void updateWithInput() {
	plane_update();

}

void show() {

	screen_render();
	plane_render();

	ball_render();


	FlushBatchDraw();

	Sleep(50);

}



void gameOver() {

	
}
int main() {

	startup();
	while (1)
	{
		show();  // 显示画面
		updateWithoutInput(DELTA_TIME);  // 与用户输入无关的更新
		updateWithInput();     // 与用户输入有关的更新
	}
	gameOver();     // 游戏结束、后续处理
	return 0;

}

