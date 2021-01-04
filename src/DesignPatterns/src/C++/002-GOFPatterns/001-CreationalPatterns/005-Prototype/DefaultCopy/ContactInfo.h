#pragma once

#include <cstring>
#include "AddressInfo.h"

struct ContactInfo {
	char name[50];
	AddressInfo address;

	ContactInfo(const char *nam, const char *street, int no)
	{
		strcpy(name, nam);
		strcpy(address.street, street);
		address.no = no;
	}
};
