#include <iostream>
#include "Movies.h"


Movies::Movies()
{
}

Movies::~Movies()
{
}

 bool Movies::add_movie(string name, string rating, int watched)
 {
    for(const Movie movie : movies)
    {
        if(movie.get_name() == name)
        {
            return false;
        }
    }

    Movie temp{name, rating, watched};
    movies.push_back(temp);
    return true;
 }

bool Movies::increment_watched(string name)
{
    for(Movie &movie : movies)
    {
        if(movie.get_name() == name)
        {
            movie.increment_watched();
            return true;
        }
    }

    return false;
}

void Movies::display() const
{
    if(movies.size() == 0)
    {
        cout << "Sorry the list is empty" << endl;
    }
    else
    {
        cout << "\n=============================================" << endl;
        for(const Movie &movie : movies)
        {
            movie.display();
        }
        cout << "\n=============================================" << endl;
    }
}
