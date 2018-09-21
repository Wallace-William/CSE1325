#include "mainwin.h"
#include <exception>
#include <stdexcept>

int Mainwin::select_container() {
    if (_containers.size() == 0) {
        Gtk::MessageDialog dialog{*this, "At least 1 container must be created first"};
        dialog.run();
        dialog.close();
        return -1;
    }
    if (_containers.size() == 1) return 0;
    std::vector<std::string> names;
    for (Mice::Container c : _containers) names.push_back(c.name());
    return select_from_vector(names, "Container");
}

int Mainwin::select_scoop() {
    if (_scoops.size() == 0) {
        Gtk::MessageDialog dialog{*this, "At least 1 scoop must be created first"};
        dialog.run();
        dialog.close();
        return -1;
    }
    std::vector<std::string> names;
    for (Mice::Scoop s : _scoops) names.push_back(s.name());
    return select_from_vector(names, "Scoop");
}

int Mainwin::select_topping() {
    if (_toppings.size() == 0) {
        Gtk::MessageDialog dialog{*this, "At least 1 topping must be created first"};
        dialog.run();
        dialog.close();
        return -1;
    }
    std::vector<std::string> names;
    for (Mice::Topping t : _toppings) names.push_back(t.name());
    return select_from_vector(names, "Topping");
}

int Mainwin::select_customer() {
    if (_customers.size() == 0) on_create_customer_click();
    if (_customers.size() == 0) return -1;
    std::vector<std::string> names;
    for (Mice::Customer c : _customers) names.push_back(c.name());
    return select_from_vector(names, "Customer");
}

int Mainwin::select_server() {
    if (_servers.size() == 0) on_create_server_click();
    if (_servers.size() == 0) return -1;
    std::vector<std::string> names;
    for (Mice::Server c : _servers) names.push_back(c.name());
    return select_from_vector(names, "Server");
}

int Mainwin::select_from_vector(std::vector<std::string> names, std::string title) {

    Gtk::Dialog dialog_index{"Select " + title, *this};
    const int WIDTH = 15;

    // Container
    Gtk::HBox b_index;

    Gtk::Label l_index{title + ":"};
    l_index.set_width_chars(WIDTH);
    b_index.pack_start(l_index, Gtk::PACK_SHRINK);

    // Create dropdown list
    Gtk::ComboBoxText c_index;
    c_index.set_size_request(WIDTH*10);
    for (std::string s : names) c_index.append(s);
    b_index.pack_start(c_index, Gtk::PACK_SHRINK);
    dialog_index.get_vbox()->pack_start(b_index, Gtk::PACK_SHRINK);

    // Show dialog_index
    dialog_index.add_button("Cancel", 0);
    dialog_index.add_button("OK", 1);
    dialog_index.show_all();
    if (dialog_index.run() != 1) return -1;

    int index = c_index.get_active_row_number();

    dialog_index.close();

    return index;
}
