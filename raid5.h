#ifndef RAID5_H
#define RAID5_H

#include "linkedlist.h"
#include "nodedisk.h"
#include "video.h"

class Raid5
{
public:
    Raid5();


    LinkedList<Video> searchMetada(std::string search);


private:

    LinkedList<NodeDisk> DiskList;
    LinkedList<Video> listVideo;
};

#endif // RAID5_H
