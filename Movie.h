#include <string>
#include <algorithm>
#ifndef OOP_MOVIE_H
#define OOP_MOVIE_H

class Movie{

    private:
    std::string name;
    std::string rating; // options are G, PG, PG-13, R
    int watched;

    //methods
    public:
    // constructor
    Movie(std::string name, std::string rating, int watched);

    // copy constructor
    Movie(const Movie &source);

    // destructor
    ~Movie();


    void display() const;

    void increment_watched(){
        ++watched;
    };

    // setters and getters for attributes
    void set_name(std::string name){
        this->name = name;
    };

    std::string get_name () const{
        return name;
    };

    void set_rating(std::string rating){
        this->rating = rating;
    };

    std::string get_rating() const {
        return rating;
    };

    void set_watched(int watched){
        this->watched = watched;
    };


    int get_watched() const {
        return watched;
    };


};

#endif //OOP_MOVIE_H
