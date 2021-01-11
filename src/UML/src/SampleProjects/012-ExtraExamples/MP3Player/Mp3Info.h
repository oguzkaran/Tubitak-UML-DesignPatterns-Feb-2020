///////////////////////////////////////////////////////////
//  Mp3Info.h
//  Implementation of the Class Mp3Info
//  Created on:      22-Kas-2018 14:40:26
//  Original author: karans
///////////////////////////////////////////////////////////

#if !defined(EA_777965C7_D2B1_41d5_8348_DA21090B3A36__INCLUDED_)
#define EA_777965C7_D2B1_41d5_8348_DA21090B3A36__INCLUDED_

class Mp3Info
{

public:
	Mp3Info();
	virtual ~Mp3Info();

	string getAlbum();
	double getDuration();
	string getName();
	void setAlbum(string album);
	void setDuration(double duration);
	void setName(string name);

private:
	string m_album;
	double m_duration;
	string m_name;

};
#endif // !defined(EA_777965C7_D2B1_41d5_8348_DA21090B3A36__INCLUDED_)
