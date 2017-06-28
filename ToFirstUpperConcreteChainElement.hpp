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

#ifndef TOFIRSTUPPERCONCRETECHAINELEMENT_HPP
#define TOFIRSTUPPERCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class ToFirstUpperConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToFirstUpperConcreteChainElement";
    void internalProcessing(MyDataObject* value) override;

public:
    ToFirstUpperConcreteChainElement();
    virtual ~ToFirstUpperConcreteChainElement();
    string getName() override;
};

#endif /* TOFIRSTUPPERCONCRETECHAINELEMENT_HPP */

