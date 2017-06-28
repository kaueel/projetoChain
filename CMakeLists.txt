cmake_minimum_required(VERSION 3.7)
project(projetoChain)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        AbstractChainElement.cpp
        AbstractChainElement.hpp
        ChainController.cpp
        ChainController.hpp
        Info.cpp
        Info.hpp
        MyDataObject.cpp
        MyDataObject.hpp
        StartChain.cpp
        ToFirstUpperConcreteChainElement.cpp
        ToFirstUpperConcreteChainElement.hpp
        ToLowerConcreteChainElement.cpp
        ToLowerConcreteChainElement.hpp
        ToUpperConcreteChainElement.cpp
        ToUpperConcreteChainElement.hpp
        XorCriptoConcreteChainElement.cpp
        XorCriptoConcreteChainElement.hpp
        CountCharConcreteChainElement.cpp
        CountCharConcreteChainElement.hpp)

add_executable(projetoChain ${SOURCE_FILES})