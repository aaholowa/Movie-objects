#include <iostream>
#include <vector>
#include <cctype>
#include "Movie.h"
#include "Collection.h"


// function prototypes
void add_movie(Collection &movies,std::string name, std::string rating, int watched);
void increment_watched(Collection &movies,std::string name);
void display();
char uppercase(char c);

int main() {

    Collection my_movies;

    my_movies.display();

    add_movie(my_movies,"Get Out", "R", 10);
    add_movie(my_movies,"The Godfather", "R", 2);
    add_movie(my_movies,"Toy Story", "G", 1);

    my_movies.display();

    add_movie(my_movies,"Get Out", "R", 8);
    add_movie(my_movies,"Miracle", "PG-13", 4);

    my_movies.display();


    increment_watched(my_movies,"The Godfather");
    increment_watched(my_movies,"Toy Story");

    my_movies.display();

    increment_watched(my_movies,"Oppenheimer");

    return 0;

}

//definitions
void add_movie(Collection &movies,std::string name, std::string rating, int watched){
    if(movies.add_movie(name, rating, watched)){
        std::cout << name << " added" << std::endl;
    }
    else{
        std::cout << name << " already exists" << std::endl;
    }
}


void increment_watched(Collection &movies,std::string name){
    if(movies.increment_watched(name)){
        std::cout << name << " watch incremented" << std::endl;
    }
    else{
        std::cout << name << " not found" << std::endl;
    }
}
