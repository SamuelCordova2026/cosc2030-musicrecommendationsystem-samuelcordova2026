#include "MusicRecommendationSystem.h"
#include <iostream>

using namespace std;

MusicRecommendationSystem::MusicRecommendationSystem() {
}

void MusicRecommendationSystem::addSong(const Song& song) {
    // TODO: Add the song to the library

    // TODO: Add a row/column to the adjacency matrix for the new song    
    
    // Update the existing rows (edges to the new song)
    for (auto& row : graph) {
        row.push_back(0);  // Add a new column (for the new song)
    }
}

void MusicRecommendationSystem::addRecommendation(int fromSongIndex, int toSongIndex) {
    try {
        // Make sure indices are within bounds
        if (fromSongIndex >= songLibrary.size() || toSongIndex >= songLibrary.size()) {
            throw out_of_range("Vertex index out of bounds.");
        }
        // TODO: Add the edge to the graph (directed)
    } catch (const out_of_range& e) {
        cout << "Error: " << e.what() << endl;
    }
}

void MusicRecommendationSystem::displaySongs() const {
    // Display deatils of all songs in song library 
}

void MusicRecommendationSystem::displayRecommendations() const {
    cout << "Recommendation Graph (Adjacency Matrix):\n";
    // Display all values of adjacency matrix
}

void MusicRecommendationSystem::createPlaylist(const string& startSongName) const {
    int startSongIndex = -1;
    for (size_t i = 0; i < songLibrary.size(); ++i) {
        if (songLibrary[i].getTitle() == startSongName) {
            startSongIndex = i;
            break;
        }
    }

    if (startSongIndex == -1) {
        cout << "Error: Song not found in the library.\n";
        return;
    }

    vector<bool> visited(songLibrary.size(), false);
    queue<int> toExplore;
    vector<int> playlist;  // Playlist indices

    toExplore.push(startSongIndex);
    visited[startSongIndex] = true;

    while (!toExplore.empty()) {
        int current = toExplore.front();
        toExplore.pop();
        playlist.push_back(current);

        // TODO: Add logic to enqueue unvisited recommended songs
        // Hint: Use the `graph` adjacency matrix and the `visited` vector.
    }

    // TODO: Replace this section with code to display the playlist
    // Hint: Use a loop to iterate through `playlist` and call the `displaySimple` method for each song.
}
