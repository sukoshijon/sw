#pragma once
#ifndef INPUT_H
#define INPUT_H

#include "sw.h"

namespace SouthwestEngine {
	class Input {
	private:
		// There is no need
		// to instance this class
		Input();

		static SDL_Joystick* _joystick;

		static const Uint8* __SDL_Keyboard;
		static Uint8* __keyboard;
		static Uint8* __keyboardChange;

		static int __arrSize;
	public:
		static void Initialize();
		static void Update();

		// keyboard input
		static bool KeyDown(SDL_Scancode key);
		static bool KeyUp(SDL_Scancode key);
		static bool Key(SDL_Scancode key);
	};
}

#endif