///////////////////////////////////////////////////////////
//  CmdInfo.cpp
//  Implementation of the Class CmdInfo
//  Created on:      05-Haz-2017 14:42:12
//  Original author: karans
///////////////////////////////////////////////////////////

#include "CmdInfo.h"


CmdInfo::CmdInfo(std::string cmdStr, CmdProc proc)
	: m_cmdStr(cmdStr), m_pF(proc)
{	
}



CmdInfo::~CmdInfo()
{

}