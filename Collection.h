#include <iostream>
#include <vector>
#include <algorithm>
#include "Movie.h"


#ifndef OOP_COLLECTION_H
#define OOP_COLLECTION_H

class Collection{

    private:
    std::vector <Movie> movie_list;

    public:

    Collection();

    ~Collection();


    bool increment_watched(std::string name);
    bool add_movie(std::string name, std::string rating, int watched);
    void display() const;

};

#endif //OOP_COLLECTION_H
