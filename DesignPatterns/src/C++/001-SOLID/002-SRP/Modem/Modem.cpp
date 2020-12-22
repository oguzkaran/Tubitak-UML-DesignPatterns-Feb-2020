#include "Modem.hpp"

#include <iostream>

void Modem::connect()
{
	std::cout << "Modem::connect" << std::endl;
}

void Modem::disconnect()
{
	std::cout << "Modem::Disconnect" << std::endl;
}

size_t Modem::send(const char *buf, size_t size)
{
	std::cout << "Modem::send" << std::endl;

	return size;
}
size_t Modem::receive(char *buf, size_t size)
{
	std::cout << "Modem::receive" << std::endl;

	return size;
}