#pragma once

#include "IConnection.hpp"
#include "ITransmission.hpp"

class Modem : public IConnection, public ITransmission {
public:
	//...
	void connect() override;
	void disconnect() override;
	size_t send(const char *buf, size_t size) override;
	size_t receive(char *buf, size_t size) override;
};

