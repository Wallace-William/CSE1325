#ifndef _PERSON_H
#define _PERSON_H
#include <string>

namespace Mice {
    class Person {
      public:
        Person(std::string name, std::string id, std::string phone);
        std::string name();
        std::string id();
        std::string phone();
        bool is_active();
        void set_active(bool active);
      private:
        std::string _name;
        std::string _id;
        std::string _phone;
        bool _active;
    };
}

#endif
