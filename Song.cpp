#include "Song.h"
#include <iostream>

using namespace std;

// Default constructor
Song::Song() 
: title("Unknown"), durationInSeconds(0), yearReleased(0), artist(Artist()) {}

// Constructor
Song::Song(const string& songTitle, int duration, int year, const Artist& songArtist)
    : title(songTitle), durationInSeconds(duration), yearReleased(year), artist(songArtist) {}

// Getters
string Song::getTitle() const { return title; }
int Song::getDuration() const { return durationInSeconds; }
int Song::getYearReleased() const { return yearReleased; }
Artist Song::getArtist() const { return artist; }

// Setters
void Song::setTitle(const string& songTitle) { title = songTitle; }
void Song::setDuration(int duration) { durationInSeconds = duration; }
void Song::setYearReleased(int year) { yearReleased = year; }
void Song::setArtist(const Artist& songArtist) { artist = songArtist; }

// Display function
void Song::display() const {
    cout << "Song: " << title << "\nDuration: " << durationInSeconds
         << " seconds\nYear Released: " << yearReleased << endl;
    artist.display();  // Call the artist's display function
}

// Simple, one-line display for playlist function
void Song::displaySimple() const {
    cout << "Song: " << title << " - " << artist.getName() << endl;
}
