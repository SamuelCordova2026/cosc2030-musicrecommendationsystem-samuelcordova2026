# Music Recommendation System 
The program is a music recommendation system that uses a graph data structure to manage song recommendations and generate playlists. Songs are stored in a library as objects, with each song containing details such as title, duration, release year, and artist information. A directed graph models the recommendation relationships between songs, where an edge from one song to another suggests a potential recommendation.

The user interacts with the system by viewing the available songs in the library and entering the name of a starting song. The program searches the library to locate the corresponding song and uses graph traversal to follow recommendation links, automatically generating a playlist of related songs. This playlist is displayed to the user, providing a seamless way to explore music based on their input.

The program is a Music Recommendation System that uses a graph data structure to manage song recommendations and generate playlists. Here's how it works:

#### Setup:
- The system stores songs in a library, with each song associated with an artist.
- Songs are represented as objects, and the library is a vector of these objects.
- A directed graph (adjacency matrix) models the recommendation relationships between songs, where an edge from song A to song B means "If you like A, you might like B."

#### Adding Songs and Recommendations:
- Songs and their details (title, duration, release year, artist) are added to the library.
- Recommendations between songs are added by creating directed edges in the graph.

#### User Interaction:
- The user is shown the available songs in the library.
- To generate a playlist, the user enters the name of a starting song.

#### Playlist Generation
- The program searches for the song by its name.
- Once the song is found, the program uses graph traversal (breadth-first search) to follow the recommendation links, automatically generating a playlist of related songs.
- The generated playlist is displayed to the user.

#### Recommendation Process:
- After the starting song is selected, the program explores all songs that are directly recommended (i.e., have a directed edge from the starting song).
- It continues exploring all other recommended songs recursively through the graph, ensuring each song is added only once to the playlist.

#### Output:
- The final playlist, consisting of all recommended songs starting from the user's selected song, is displayed in order of the recommendations, showing their details like title, artist, and release year.

## To compile the program:
g++ main.cpp MusicRecommendationSystem.cpp Song.cpp Artist.cpp -o musicRecommendationSystem

## To run the program:
./musicRecommendationSystem


# Reflection Questions (see week 14 slides - type your answers below)