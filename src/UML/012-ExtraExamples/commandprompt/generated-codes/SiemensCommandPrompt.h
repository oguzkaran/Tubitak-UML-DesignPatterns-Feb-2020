///////////////////////////////////////////////////////////
//  SiemensCommandPrompt.h
//  Implementation of the Class SiemensCommandPrompt
//  Created on:      05-Haz-2017 14:42:14
//  Original author: karans
///////////////////////////////////////////////////////////

#if !defined(EA_5619964B_48C6_4a6d_8A5E_DFD2AC238AB1__INCLUDED_)
#define EA_5619964B_48C6_4a6d_8A5E_DFD2AC238AB1__INCLUDED_

#include "CmdInfo.h"

class SiemensCommandPrompt
{

public:
	SiemensCommandPrompt();
	virtual ~SiemensCommandPrompt();
	CmdInfo *m_CmdInfo;

	SiemensCommandPrompt(string prompt);
	void run();

private:
	string m_prompt;

};
#endif // !defined(EA_5619964B_48C6_4a6d_8A5E_DFD2AC238AB1__INCLUDED_)
