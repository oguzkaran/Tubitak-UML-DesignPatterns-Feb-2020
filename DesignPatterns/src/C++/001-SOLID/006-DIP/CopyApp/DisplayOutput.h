#pragma once
#include "Output.h"

class DisplayOutput : public Output {
public:
	size_t Write(int b) override;
};

