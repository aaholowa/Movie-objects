#include <iostream>
#include "Collection.h"
#include "Movie.h"

Collection::Collection(){
}

Collection::~Collection(){
}

bool Collection::add_movie(std::string name, std::string rating, int watched) {
    for (const Movie &movie: movie_list) {
        if (movie.get_name() == name) {
            return false;
        }
    }
    Movie added_movie(name, rating, watched);
    movie_list.push_back(added_movie);
    return true;
}

bool Collection::increment_watched(std::string name) {
    for(Movie &movie: movie_list){
        if(movie.get_name() == name){
            movie.increment_watched();
            return true;
        }
    }
    return false;
}


void Collection::display() const{
    if(movie_list.size() != 0){
        std::cout << "***************************" << std::endl;
        for(const auto &movie: movie_list){
            movie.display();
        }
        std::cout << "***************************" << std::endl;
    }
    else{
        std::cout << "***************************" << std::endl;
        std::cout << "Movie collection is empty" << std::endl;
        std::cout << "***************************" << std::endl;
    }
}