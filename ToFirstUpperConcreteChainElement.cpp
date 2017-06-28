/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   toLowerConcreteChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:34 PM
 */

#include <cctype>
#include <cstring>
#include "ToFirstUpperConcreteChainElement.hpp"

ToFirstUpperConcreteChainElement::ToFirstUpperConcreteChainElement() {
    this->setNext(NULL);
}

ToFirstUpperConcreteChainElement::~ToFirstUpperConcreteChainElement() {
    this->setNext(NULL);
}

string ToFirstUpperConcreteChainElement::getName() {
    return (this->name);
}

void ToFirstUpperConcreteChainElement::internalProcessing(MyDataObject *value) {
    string buffer = value->getValue();

    for (int i = 0; i < strlen(buffer); i++) {
        buffer[i] |= (1 << 5);
        if (!i || buffer[i - 1] == ' ')
            buffer[i] &= ~(1 << 5);
    }

    value->setValue(buffer);
}
