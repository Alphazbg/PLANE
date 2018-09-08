#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <graphics.h>

#include "Constant.h"
#include "screen.h"

IMAGE background;

void screen_init() {
	initgraph(WINDOW_WIDTH, WINDOW_HEIGHT);
	loadimage(&background, _T("background.jpg"));
}

void screen_render() {
	putimage(0, 0, &background);
}