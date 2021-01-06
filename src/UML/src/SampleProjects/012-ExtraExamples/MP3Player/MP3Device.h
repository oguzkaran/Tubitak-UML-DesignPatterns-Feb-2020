///////////////////////////////////////////////////////////
//  MP3Device.h
//  Implementation of the Class MP3Device
//  Created on:      22-Kas-2018 14:40:27
//  Original author: karans
///////////////////////////////////////////////////////////

#if !defined(EA_C20E5574_01B2_4a81_B3F4_98E48E146CF3__INCLUDED_)
#define EA_C20E5574_01B2_4a81_B3F4_98E48E146CF3__INCLUDED_

#include "Mp3Info.h"

class MP3Device
{

public:
	MP3Device();
	virtual ~MP3Device();
	

	void addTrack(Mp3Info track);
	void displayTrack();
	Mp3Info getCurrentTrack();
	void loadMp3Files();
	~Mp3Device();
	Mp3Device();
	void pauseTrack();
	void playTrack();
	void setCurrentTrack(Mp3Info currentTrack);
	void stopTrack();

private:
	Mp3Info m_Mp3Info;
	std::vector<Mp3Info> m_trackList;

};
#endif // !defined(EA_C20E5574_01B2_4a81_B3F4_98E48E146CF3__INCLUDED_)
