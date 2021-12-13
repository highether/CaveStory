#include "input.h"

/*Input class
Keeps track of key presses
*/

//Function called an the beginning of each new frame
//to reset no longer relevant keys
void Input::beginNewFrame() {
	this->_pressedKeys.clear();
	this->_releasedKeys.clear();
}

//Called when the key is pressed
void Input::keyDownEvent(const SDL_Event& event) {
	this->_pressedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = true;
}

//Called when the key is released
void Input::keyUpEvent(const SDL_Event& event) {
	this->_releasedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = false;
}

//Check if the certain key was pressed during the current frame
bool Input::wasKeyPressed(SDL_Scancode key) {
	return this->_pressedKeys[key];
}

//Check if the certain key was released during the current frame
bool Input::wasKeyReleased(SDL_Scancode key) {
	return this->_releasedKeys[key];
}
											
//Check if the certain key is currently being held
bool Input::isKeyHeld(SDL_Scancode key) {
	return this->_heldKeys[key];
}