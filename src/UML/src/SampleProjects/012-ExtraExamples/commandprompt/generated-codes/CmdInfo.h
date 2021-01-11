///////////////////////////////////////////////////////////
//  CmdInfo.h
//  Implementation of the Class CmdInfo
//  Created on:      05-Haz-2017 14:42:12
//  Original author: karans
///////////////////////////////////////////////////////////

#if !defined(EA_83C61657_A21D_403d_A8E2_30226573CF6B__INCLUDED_)
#define EA_83C61657_A21D_403d_A8E2_30226573CF6B__INCLUDED_

class CmdInfo
{

public:
	CmdInfo();
	virtual ~CmdInfo();

private:
	string m_cmdStr;
	CmdProc m_pF;

};
#endif // !defined(EA_83C61657_A21D_403d_A8E2_30226573CF6B__INCLUDED_)
