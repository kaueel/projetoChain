/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   toLowerConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:34 PM
 */

#ifndef COUNTCHARCONCRETECHAINELEMENT_HPP
#define COUNTCHARCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class CountCharConcreteChainElement : public AbstractChainElement {
private:
    const string name = "CountCharConcreteChainElement";
    void internalProcessing(MyDataObject* value) override;

public:
    CountCharConcreteChainElement();
    virtual ~CountCharConcreteChainElement();
    string getName() override;
};

#endif /* COUNTCHARCONCRETECHAINELEMENT_HPP */

