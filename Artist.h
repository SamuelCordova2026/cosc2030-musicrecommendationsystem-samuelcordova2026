// Artist.h
#ifndef ARTIST_H
#define ARTIST_H

#include <string>
#include <iostream>

using namespace std;

class Artist {
private:
    string name;
    string genre;
    int activeYears;
    int releasedAlbums;

public:
    // Default constructor declaration
    Artist();

    // Parameterized constructor declaration
    Artist(const string& artistName, const string& artistGenre, int activeYears, int releasedAlbums);

    // Getter methods
    string getName() const;
    string getGenre() const;
    int getActiveYears() const;
    int getReleasedAlbums() const;

    // Setter methods
    void setName(const string& artistName);
    void setGenre(const string& artistGenre);
    void setActiveYears(int years);
    void setReleasedAlbums(int albums);

    // Display function
    void display() const;
};

#endif // ARTIST_H
