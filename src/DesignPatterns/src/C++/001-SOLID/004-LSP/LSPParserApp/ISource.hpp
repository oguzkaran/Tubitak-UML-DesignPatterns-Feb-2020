#pragma once

struct ISource {
	virtual int GetNextChar() = 0;
	virtual ~ISource() = default;
};

