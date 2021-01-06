///////////////////////////////////////////////////////////
//  SiemensCommandPrompt.cpp
//  Implementation of the Class SiemensCommandPrompt
//  Created on:      05-Haz-2017 14:42:14
//  Original author: karans
///////////////////////////////////////////////////////////

#include <iostream>
#include "SiemensCommandPrompt.h"

using namespace std;

void dirProc()
{
	cout << "list" << endl;
}

void clsProc()
{
	cout << "cls" << endl;
}

void cpProc()
{
	cout << "copy" << endl;
}
SiemensCommandPrompt::SiemensCommandPrompt(std::string prompt)
	: m_prompt(prompt)
{
	
}

SiemensCommandPrompt::~SiemensCommandPrompt()
{

}

void SiemensCommandPrompt::run()
{
	string str;

	CmdInfo cmds[] = { 
		CmdInfo(string("dir"), dirProc),
		CmdInfo(string("cls"), clsProc),
		CmdInfo(string("cp"), cpProc),
		CmdInfo(string("NULL"), cpProc)
	};

	for (;;) {
		cout << m_prompt << ">";
		cin >> str;

		if (str == "exit")
			break;

		if (str == "NULL") {
			cout << "Invalid Command" << endl;
			continue;
		}
			
		const CmdInfo *pc = getCommandInfo(cmds, str);

		if (pc != nullptr)
			pc->pf()();
		else
			cout << "Invalid command" << endl;
	}
}

const CmdInfo * SiemensCommandPrompt::getCommandInfo(const CmdInfo *cmds, string cmd)
{
	for (int i = 0; cmds[i].cmdStr() != "NULL"; ++i) {
		if (cmds[i].cmdStr() == cmd)
			return &cmds[i];
	}

	return nullptr;
}
