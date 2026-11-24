#ifndef MUSIC_RECOMMENDATION_SYSTEM_H
#define MUSIC_RECOMMENDATION_SYSTEM_H

#include <vector>
#include <string>
#include <queue>
#include "Song.h"

class MusicRecommendationSystem {
private:
    std::vector<Song> songLibrary;             // Library of songs
    std::vector<std::vector<int>> graph;       // Adjacency matrix for song recommendations

public:
    // Constructor
    MusicRecommendationSystem();

    // Add a song to the library
    void addSong(const Song& song);

    // Add a recommendation (directed edge) between songs
    void addRecommendation(int fromSongIndex, int toSongIndex);

    // Display all songs in the library
    void displaySongs() const;

    // Display the recommendation graph as an adjacency matrix
    void displayRecommendations() const;

    // Create a playlist starting from a given song name
    void createPlaylist(const std::string& startSongName) const;
};

#endif // MUSIC_RECOMMENDATION_SYSTEM_H
