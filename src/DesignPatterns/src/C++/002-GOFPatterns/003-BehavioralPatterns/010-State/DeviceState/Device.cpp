#include "Device.h"
#include "IDeviceState.h"

void Device::SetState(std::unique_ptr<IDeviceState> state)
{
	m_state = std::move(state);
}
void Device::On()
{
	m_state->On(this);
}
void Device::Off()
{
	m_state->Off(this);
}
void Device::Pause()
{
	m_state->Pause(this);
}
