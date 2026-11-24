// Song.h
#ifndef SONG_H
#define SONG_H

#include "Artist.h"  // Ensure you include Artist.h if Song uses Artist

class Song {
private:
    string title;
    int durationInSeconds;
    int yearReleased;
    Artist artist;

public:
    // Default constructor
    Song();

    // Constructor 
    Song(const string& songTitle, int duration, int year, const Artist& songArtist);

    // Getter methods
    string getTitle() const;
    int getDuration() const;
    int getYearReleased() const;
    Artist getArtist() const;

    // Setter methods
    void setTitle(const string& songTitle);
    void setDuration(int duration);
    void setYearReleased(int year);
    void setArtist(const Artist& songArtist);

    // Display method
    void display() const;
    void displaySimple() const;
};

#endif // SONG_H
