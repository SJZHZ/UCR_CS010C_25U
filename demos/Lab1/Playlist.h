#include <string>
class PlaylistNode
{
public:
    PlaylistNode();
    PlaylistNode(const std::string &id, const std::string &name, const std::string &artist, int length);
    void InsertAfter(PlaylistNode *node);
    void SetNext(PlaylistNode *node);
    std::string GetID() const;
    std::string GetSongName() const;
    std::string GetArtistName() const;
    int GetSongLength() const;
    PlaylistNode *GetNext() const;
    void PrintPlaylistNode() const;
private:
    std::string uniqueID;
    std::string songName;
    std::string artistName;
    int songLength;
    PlaylistNode *nextNodePtr;
};