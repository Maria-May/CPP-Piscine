#pragma once
#include <iostream>

class Brain
{
public:
    Brain();
    ~Brain();
    Brain(const Brain &b);
	Brain &operator= (const Brain &other);
    std::string ideas[100];
};


