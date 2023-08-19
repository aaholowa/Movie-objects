#include <iostream>
#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
    : name{name}, rating{rating}, watched{watched}{

};

// copy constructor
Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched}{
};

// destructor
Movie::~Movie(){
};


void Movie::display() const{
    if(this->watched == 1){
        std::cout << name << ", " << rating << ", " << "Watched "<< watched << " time" << std::endl;
    }
    else{
        std::cout << name << ", " << rating << ", " << "Watched "<< watched << " times" << std::endl;
    }
}