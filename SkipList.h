#include <time.h>
#include <unistd.h>

struct node
{
    int value;
    node* next;
    node* below;
    node* aboveLevel =nullptr;
};

class SkipList
{
public:
    node* header;
    node* sentinle;
    int height;
    SkipList();
    bool flipCoin();
    int searchN(int value);
    void insertN(int value);
    void deleteN(int value);
    void getLayers();
    void printLayer(int layerNum);
    void printSkipA();
    void printSkip();
};
