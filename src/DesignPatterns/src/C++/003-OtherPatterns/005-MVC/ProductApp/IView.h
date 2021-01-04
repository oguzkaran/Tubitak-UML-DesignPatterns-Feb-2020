#pragma once

struct IView {
	virtual void View() = 0;
	virtual ~IView() = default;
};
