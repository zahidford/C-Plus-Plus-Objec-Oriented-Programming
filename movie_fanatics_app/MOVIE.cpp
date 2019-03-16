#include <iostream>
#include "MOVIE.h"

// Implemention of the construcor

MOVIE::MOVIE(std::string name, std::string rating, int watched) 
    : name(name), rating(rating), watched(watched)  {
}

//Implemention of the copy constructor
MOVIE::MOVIE(const MOVIE &source) 
    : MOVIE{source.name, source.rating, source.watched} {
}

// Implementation of the destructor
MOVIE::~MOVIE() {
}

// Implementation of the display method
// should just insert the movie attributes to cout

void MOVIE::display() const {
    std::cout << name << ", " << rating <<  ", " << watched  <<   std::endl;
}
