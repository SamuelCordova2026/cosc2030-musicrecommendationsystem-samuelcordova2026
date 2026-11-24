// Artist.cpp
#include "Artist.h"

// Default constructor definition
Artist::Artist()
    : name("Unknown"), genre("Unknown"), activeYears(0), releasedAlbums(0) {}

// Parameterized constructor definition
Artist::Artist(const string& artistName, const string& artistGenre, int activeYears, int releasedAlbums)
    : name(artistName), genre(artistGenre), activeYears(activeYears), releasedAlbums(releasedAlbums) {}

// Getter methods
string Artist::getName() const { return name; }
string Artist::getGenre() const { return genre; }
int Artist::getActiveYears() const { return activeYears; }
int Artist::getReleasedAlbums() const { return releasedAlbums; }

// Setter methods
void Artist::setName(const string& artistName) { name = artistName; }
void Artist::setGenre(const string& artistGenre) { genre = artistGenre; }
void Artist::setActiveYears(int years) { activeYears = years; }
void Artist::setReleasedAlbums(int albums) { releasedAlbums = albums; }

// Display method
void Artist::display() const {
    cout << "Artist: " << name << "\nGenre: " << genre 
         << "\nActive Years: " << activeYears 
         << "\nReleased Albums: " << releasedAlbums << endl;
}
