#ifndef RAID5_H
#define RAID5_H

#include "linkedlist.h"
#include "nodedisk.h"

class Raid5
{
public:
    Raid5();

private:
    LinkedList<NodeDisk> DiskList;
};

#endif // RAID5_H
