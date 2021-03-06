#include "container.h"

namespace Mice {

Container::Container(std::string name, std::string description, double cost, double price,
              int max_scoops)
          : Item(name, description, cost, price), _max_scoops{max_scoops} { }
std::string Container::type() const {return "Container";}
int Container::max_scoops() const {return _max_scoops;}
}
