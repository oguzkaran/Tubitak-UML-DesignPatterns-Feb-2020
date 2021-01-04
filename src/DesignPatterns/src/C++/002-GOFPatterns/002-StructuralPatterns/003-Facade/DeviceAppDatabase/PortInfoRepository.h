#ifndef PORTINFOREPOSITORY_H_
#define PORTINFOREPOSITORY_H_

#include <vector>
#include "ICrudRepository.h"
#include "PortInfo.h"

class PortInfoRepository : public ICrudRepository<PortInfo, long, std::vector<PortInfo>> {
public:
    PortInfo &save(PortInfo &t) override;

    std::vector<PortInfo> find_all() override;

    bool exist_by_id(const long &id) override;
};

#endif //PORTINFOREPOSITORY_H_
