#ifndef _CUSTOMER_H
#define _CUSTOMER_H
#include "person.h"
#include <string>

namespace Mice {
    class Customer : public Person {
      public:
        Customer(std::string name, std::string id, std::string phone);
    };
}

#endif
