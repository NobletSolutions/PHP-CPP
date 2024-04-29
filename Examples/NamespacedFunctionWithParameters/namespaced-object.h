/*
 * pdf-image.h
 *
 *  Created on: Dec 29, 2017
 *      Author: gnat
 */

#ifndef NAMESPACED_OBJECT_H_
#define NAMESPACED_OBJECT_H_

#include <phpcpp.h>

class NamespacedObject : public Php::Base {
private:
    int64_t x = 0;
    int64_t y = 0;
public:
    NamespacedObject();
    void __construct(Php::Parameters &params);
    Php::Value getX();
    Php::Value getY();
    Php::Value getString();
};

#endif /* NAMESPACED_OBJECT_H_ */
