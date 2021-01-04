#pragma once

#include <string>
#include <memory>

enum IconType {QUESTION, WARNING, CRITICAL};
enum ButtonType {YESNO, YESNOCANCEL, OK};

class AlertDialog;

class AlertDialog {	
public:
	class Builder {
	public:
		Builder() : m_up{ std::unique_ptr<AlertDialog>(new AlertDialog) }
		{}
	public:
		Builder  &setTitle(const std::string &title);
		Builder  &setText(const std::string &text);
		Builder  &setIcon(IconType icon);
		Builder  &setButton(ButtonType button);
		std::unique_ptr<AlertDialog> build();
	private:
		std::unique_ptr<AlertDialog> m_up;
	};
public:
	std::string GetTitle() const { return m_title; }
	std::string GetText() const { return m_text; }
	IconType GetIconType() const { return m_icon; }
	ButtonType GetButtonType() const { return m_button; }

	void Show();
private:
	AlertDialog(const std::string &title = std::string(), const std::string &text= std::string(),
		IconType icon = IconType::WARNING, ButtonType button = ButtonType::OK)
		: m_title{ title }, m_text{ text }, m_icon{ icon }, m_button{ button }
	{}
private:
	std::string m_title, m_text;
	IconType m_icon;
	ButtonType m_button;
};

