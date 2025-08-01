#include <iostream>
#include <string>
#include "Playlist.h"
using namespace std;
PlaylistNode::PlaylistNode(const std::string &id, const std::string &name, const std::string &artist, int length)
    : uniqueID(id), songName(name), artistName(artist), songLength(length), nextNodePtr(nullptr) {}

PlaylistNode::PlaylistNode()
    : uniqueID("none"), songName("none"), artistName("none"), songLength(0), nextNodePtr(nullptr) {}

void PlaylistNode::InsertAfter(PlaylistNode *node)
{
    //
}
void PlaylistNode::SetNext(PlaylistNode *node)
{
    //
}
std::string PlaylistNode::GetID() const
{
    // Obviously this is not the correct implementation
    return "";
}
std::string PlaylistNode::GetSongName() const
{
    // Obviously this is not the correct implementation
    return "";
}
std::string PlaylistNode::GetArtistName() const
{
    // Obviously this is not the correct implementation
    return "";
}
int PlaylistNode::GetSongLength() const
{
    // Obviously this is not the correct implementation
    return 0;
}
PlaylistNode *PlaylistNode::GetNext() const
{
    // Obviously this is not the correct implementation
    return nullptr;
}
void PlaylistNode::PrintPlaylistNode() const
{
    //
}

