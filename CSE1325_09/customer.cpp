#include "customer.h"

namespace Mice {
Customer::Customer(std::string name, std::string id, std::string phone)
             : Person(name, id, phone) { }
}
