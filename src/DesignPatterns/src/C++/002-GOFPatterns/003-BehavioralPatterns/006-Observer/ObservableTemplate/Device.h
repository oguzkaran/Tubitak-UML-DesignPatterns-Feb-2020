#pragma once
#include <string>
#include "Observable.h"

class Device : public Observable<Device> {
public:
	Device(std::string name = std::string{ "" }, std::string producer = std::string{ "" })
		: m_name{ name }, m_producer{ producer }
	{}
	std::string GetName() const { return m_name; }
	std::string GetProducer() const { return m_producer; }
	void SetName(std::string name);	
	void SetProducer(std::string producer);	
private:
	std::string m_name, m_producer;
};

