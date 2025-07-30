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
    return this->uniqueID;
}
std::string PlaylistNode::GetSongName() const
{
    return this->songName;
}
std::string PlaylistNode::GetArtistName() const
{
    return this->artistName;
}
int PlaylistNode::GetSongLength() const
{
    return this->songLength;
}
PlaylistNode *PlaylistNode::GetNext() const
{
    return this->nextNodePtr;
}
void PlaylistNode::PrintPlaylistNode() const
{
    //
}

