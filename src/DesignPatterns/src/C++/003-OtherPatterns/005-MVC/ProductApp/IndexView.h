#pragma once
#include "IView.h"

class IndexView : public IView {
public:
	int GetOption() const { return m_option; }
	void View() override;
private:
	void displayMenu() const;
private:
	int m_option;
};


