#pragma once

#include <Windows.h>

namespace WindowEffect {
void moveWindow(HWND hWnd);
void addShadowEffect(HWND hWnd);
void removeShadowEffect(HWND hWnd);
void removeMenuShadowEffect(HWND hWnd);
void addWindowAnimation(HWND hWnd);
}; // namespace WindowEffect
