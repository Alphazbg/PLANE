#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <graphics.h>

#include "Constant.h"
#include "ball.h"

int ball_x, ball_y;
int V_x, V_y;

void ball_init() {
	ball_x = 20;
	ball_y = 20;
	V_x = 6;
	V_y = 8;

	setlinecolor(YELLOW);
	setfillcolor(RED);
	fillcircle(ball_x, ball_y, R);

}

void ball_update() {
	ball_x += V_x;
	ball_y += V_y;

	if (ball_x == 500 || ball_x < R) V_x = -V_x;

	if (ball_y == 500 || ball_y < R) V_y = -V_y;

}
void ball_render() {

	setlinecolor(YELLOW);
	setfillcolor(RED);
	Sleep(20);
	fillcircle(ball_x, ball_y, R);

}

