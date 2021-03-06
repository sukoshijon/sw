#pragma once
#ifndef SW_H
#define SW_H

// stl
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
// c stl
#include <stdio.h>
#include <stdlib.h>
// OGRE
#include <OGRE/Ogre.h>
#include <OGRE/RTShaderSystem/OgreRTShaderSystem.h> // huh??
// OGRE Overlays
#include <OGRE/Overlay/OgreOverlay.h>
#include <OGRE/Overlay/OgreOverlaySystem.h>
#include <OGRE/Overlay/OgreOverlayManager.h>
#include <OGRE/Overlay/OgreOverlayElement.h>
#include <OGRE/Overlay/OgreOverlayContainer.h>
#include <OGRE/Overlay/OgreOverlayPrerequisites.h>
#include <OGRE/Overlay/OgrePanelOverlayElement.h>
#include <OGRE/Overlay/OgreTextAreaOverlayElement.h>
// SDL (for input)
#include <SDL2/SDL.h>
// rapidjson
#include <rapidjson/document.h>
// fmod
#include <fmod.hpp>

// Utils
#include "FileUtils.h"
#include "Maths.h"
// Graphics: 2D
#include "Drawable2D.h"
#include "Sprite.h"
#include "SpriteRenderer.h"
// scene/state management
#include "Scene.h"
#include "Director.h"
// Core
#include "Audio.h"
#include "Input.h"
#include "Graphics.h"
#include "AssetManager.h"

namespace SouthwestEngine {
	class Southwest {
	private:
		// static class, don't instance
		Southwest(); 
		// internal storage for pref path so you cant modify it
		static char* _prefPath;
	public:
		// Should the game be running?
		// Ideally you should use this in your main loop to make it, uh, loop
		static bool Running;

		// Initialize engine
		// Returns 0 on success, 1 on failure
		// org can be nullptr, it will default to Tobesoft for now
		static int Initialize(const std::string title, const std::string org);

		// Shutdown engine
		static void Stop();

		static char* GetPrefPath();
	};
}

#endif