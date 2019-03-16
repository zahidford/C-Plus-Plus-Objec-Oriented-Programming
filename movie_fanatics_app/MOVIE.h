#ifndef MOVIE_H
#define MOVIE_H
#include <string>
class MOVIE
{
private:
	friend class MOVIE;
	std::string name;
	std::string rating;
	int watched;
public:
	 // Constructor - expects all 3 movie attributes
    MOVIE(std::string name, std::string rating, int watched);
    
    // Copy constructor 
    MOVIE(const MOVIE &source); 
    
    // Destructor
    ~MOVIE();
    
    // Basic getters and setters for private attributes
    // implement these inline and watch your const-correctness
    
    void set_name(std::string name) {this->name = name; }
    std::string get_name() const { return name; }
    
    void set_rating(std::string rating) {this->rating = rating; }
    std::string get_rating() const { return rating; }
    
    void set_watched(int watched) {this->watched = watched; }
    int get_watched() const { return watched; }
    
    // Simply increment the watched attribute by 1
    void increment_watched() { ++watched; }
    
    // simply displays the movie information ex.) Big, PG-13, 2
    void display() const;

};

#endif // MOVIE_H
