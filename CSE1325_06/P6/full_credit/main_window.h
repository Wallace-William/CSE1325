#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include "controller.h"
#include <gtkmm.h>

class Main_window : public Gtk::Window
{
    public:
        Main_window(Controller& controller);
        virtual ~Main_window();
    protected:
        void on_list_pubs_click();        // Create a new publication
        void on_add_pub_click();          // Add a new publication
        void on_checkout_click();         // Checkout an existing publication
        void on_checkin_click();          // Checkout an existing publication
        void on_list_patrons_click();     // List all patrons
        void on_add_patron_click();       // Add a patron
        void on_manual_click();           // Display Help dialog
        void on_about_click();            // Display About dialog
        void on_quit_click();             // Exit the LMS
        void on_test_click();             // "Easter egg"
    private:
        Gtk::Label *msg;                  // Status message display
        Controller& _controller;          // The controller instance for LMS
};
#endif 

