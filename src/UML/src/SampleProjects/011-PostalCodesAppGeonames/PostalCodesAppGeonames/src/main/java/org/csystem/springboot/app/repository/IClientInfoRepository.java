package org.csystem.springboot.app.repository;

import org.csystem.springboot.app.entity.ClientInfo;
import org.springframework.data.repository.CrudRepository;

public interface IClientInfoRepository extends CrudRepository<ClientInfo, Long> {

}
