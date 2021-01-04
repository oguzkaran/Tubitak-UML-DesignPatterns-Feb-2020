#pragma once

struct ICommand {
	virtual void Execute() = 0;
	virtual ~ICommand() = default;
};
