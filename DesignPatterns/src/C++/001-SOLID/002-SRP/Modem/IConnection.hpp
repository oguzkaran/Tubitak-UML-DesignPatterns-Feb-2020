#pragma once


struct IConnection {
	virtual void connect() = 0;
	virtual void disconnect() = 0;
	virtual ~IConnection() = default;
};

