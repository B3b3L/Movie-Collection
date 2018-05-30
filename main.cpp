#include <iostream>
#include <string>
#include "Movies.h"

using namespace std;

void add_movie(Movies& movies, string name, string rating, int watched)
{
    if(movies.add_movie(name, rating, watched))
    {
        cout << name << " added" << endl;
    }
    else
    {
        cout << name << " already exists" << endl;
    }
}

void increment_watched(Movies& movies, string name)
{
    if(movies.increment_watched(name))
    {
        cout << name << " watched incremented" << endl;
    }
    else
    {
        cout << name << " not found" << endl;
    }
}

int main()
{
    Movies my_movies;

    my_movies.display();
    add_movie(my_movies, "Rick and Morty", "PG-16", 3);
    add_movie(my_movies, "Star Wars", "PG-12", 4);
    add_movie(my_movies, "Ashe", "PG-18", 5);

    my_movies.display();

    add_movie(my_movies, "Ashe", "PG", 5);
    add_movie(my_movies, "Ice Age", "PG", 12);

    my_movies.display();

    increment_watched(my_movies,"Ashe");
    increment_watched(my_movies,"Ice Age");

    my_movies.display();


    increment_watched(my_movies,"XXX");




    return 0;
}
