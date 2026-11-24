#include "MusicRecommendationSystem.h"
#include "Artist.h"
#include "Song.h"

using namespace std;

int main() {
    // Create artists
    Artist beatles("The Beatles", "Rock", 10, 12);
    Artist queen("Queen", "Rock", 20, 15);
    Artist adele("Adele", "Pop", 15, 5);
    Artist taylorSwift("Taylor Swift", "Pop", 30, 18);
    Artist ledZeppelin("Led Zeppelin", "Rock", 25, 10);

    // Create songs
    Song heyJude("Hey Jude", 431, 1968, beatles);
    Song bohemianRhapsody("Bohemian Rhapsody", 354, 1975, queen);
    Song rollingInTheDeep("Rolling in the Deep", 228, 2011, adele);
    Song shakeItOff("Shake It Off", 242, 2014, taylorSwift);
    Song stairwayToHeaven("Stairway to Heaven", 482, 1971, ledZeppelin);
    Song someoneLikeYou("Someone Like You", 285, 2011, adele);
    Song weWillRockYou("We Will Rock You", 122, 1977, queen);
    Song yesterday("Yesterday", 125, 1965, beatles);

    // Create a music recommendation system for the songs
    MusicRecommendationSystem system;

    // Add songs to the system
    system.addSong(heyJude);
    system.addSong(bohemianRhapsody);
    system.addSong(rollingInTheDeep);
    system.addSong(shakeItOff);
    system.addSong(stairwayToHeaven);
    system.addSong(someoneLikeYou);
    system.addSong(weWillRockYou);
    system.addSong(yesterday);

    // Add recommendations (linked by song IDs)
    system.addRecommendation(0, 1); // "Hey Jude" -> "Bohemian Rhapsody"
    system.addRecommendation(1, 2); // "Bohemian Rhapsody" -> "Rolling in the Deep"
    system.addRecommendation(2, 5); // "Rolling in the Deep" -> "Someone Like You"
    system.addRecommendation(3, 2); // "Shake It Off" -> "Rolling in the Deep"
    system.addRecommendation(4, 1); // "Stairway to Heaven" -> "Bohemian Rhapsody"
    system.addRecommendation(1, 6); // "Bohemian Rhapsody" -> "We Will Rock You"
    system.addRecommendation(7, 0); // "Yesterday" -> "Hey Jude"

    // Display the songs
    cout << "Song Library:\n";
    system.displaySongs();

    // Generate playlists based on recommendations
    cout << "\nGenerate a Playlist\n";
    string startSongName;
    cout << "Enter the name of the starting song: ";
    getline(cin, startSongName);

    // Create a playlist based on user input
    system.createPlaylist(startSongName);

    return 0;
}
