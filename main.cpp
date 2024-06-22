#include "sciter-x-window.hpp"
#include "sciter-gtk-main.cpp"
#include "resources.cpp" // resources packaged into binary blob.

int uimain(std::function<int()> run ) {
    sciter::archive::instance().open(aux::elements_of(resources));
	
    sciter::window * win = new sciter::window(SW_ALPHA , { 0, 0 ,200, 330 });
	win->load(WSTR("this://app/duck.htm"));
	win->expand();
    
    return run();
}