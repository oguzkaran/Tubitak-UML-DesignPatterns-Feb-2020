#pragma once

#include "ISource.hpp"


class Parser {
public:
	Parser(ISource *src) : m_src{ src }
	{}
	ISource *GetSource() const { return m_src; }
	void SetSource(ISource *src);
	void DoParse();
private:
	ISource *m_src;
};

