//
// Created by gcode on 6/4/22.
//

#ifndef FRISTSSH_CLASSES_H
#define FRISTSSH_CLASSES_H
#include <iostream>

class classes {
private:
    int age{};
    const char *name{};
    char IdUsers[8]{};
protected:
   std::string makeuserID(classes *class1);
public:
    classes();
};


#endif //FRISTSSH_CLASSES_H
