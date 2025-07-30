#include <iostream>
#include <string>
#include "Playlist.h"
using namespace std;

void PrintMenu(std::string &title)
{
    std::cout << title << " PLAYLIST MENU\n";
    std::cout << "a - Add song\n";
    std::cout << "d - Remove song\n";
    std::cout << "c - Change position of song\n";
    std::cout << "s - Output songs by specific artist\n";
    std::cout << "t - Output total time of playlist (in seconds)\n";
    std::cout << "o - Output full playlist\n";
    std::cout << "q - Quit\n\n";
    std::cout << "Choose an option:\n";
}
void Output_full_playlist(std::string title, PlaylistNode *head)
{
    std::cout << title << " - OUTPUT FULL PLAYLIST\n";
    //
}
void Add_song(PlaylistNode *&head)
{
    std::cout << "ADD SONG\n";
    // int length;
    std::string id, name, artist;
    
    std::cout << "Enter song's unique ID:\n";
    std::cin.ignore();  // Clear the newline character from the input buffer
    std::getline(std::cin, id);

    std::cout << "Enter song's name:\n";
    std::getline(std::cin, name);



    // Just for demo
    std::cout << "DEMO Information:\n";
    std::cout << "  ID: " << id << "\n";
    std::cout << "  Name: " << name << "\n";
}
void Remove_song(PlaylistNode *&head)
{
    std::cout << "REMOVE SONG\n";
    //
}
void Change_position_of_song(PlaylistNode *&head)
{
    std::cout << "CHANGE POSITION OF SONG\n";
    //
}
void Output_songs_by_artist(PlaylistNode *head)
{
    std::cout << "OUTPUT SONGS BY SPECIFIC ARTIST\n";
    //
}
void Output_total_time(PlaylistNode *head)
{
    std::cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)\n";
    //
}

int main()
{
    std::cout << "Enter playlist's title:\n";
    std::string title;
    PlaylistNode *head = nullptr;
    std::getline(std::cin, title);

    while (true)
    {
        std::cout << "\n";
        PrintMenu(title);
        char choice;
        std::cin >> choice;
        switch (choice)
        {
            case 'a':
                Add_song(head);
                break;
            case 'd':
                Remove_song(head);
                break;
            case 'c':
                Change_position_of_song(head);
                break;
            case 's':
                Output_songs_by_artist(head);
                break;
            case 't':
                Output_total_time(head);
                break;
            case 'o':
                Output_full_playlist(title, head);
                break;
            case 'q':
                // delete all nodes in the linked list will be better
                // since it's Lab1, we just quit
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}