
#include <phpcpp.h>
#include <string.h>
#include "namespaced-object.h"

NamespacedObject::NamespacedObject() = default;

void NamespacedObject::__construct(Php::Parameters &params) {
    x = params[0].numericValue();
    y = params[1].numericValue();
}

Php::Value NamespacedObject::getX() {
    return x;
}

Php::Value NamespacedObject::getY() {
    return y;
}

Php::Value NamespacedObject::getString() {
    return std::string("the string");
}
