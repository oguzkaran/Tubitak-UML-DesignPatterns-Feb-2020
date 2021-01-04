#pragma once

#include <string>
#include <utility>

enum IconType {Question, Warning, Critical};
enum ButtonType {YesNo, YesNoCancel, Ok};

class AlertDialog {
	friend class AlertDialogBuilder;
private:
    std::string m_title, m_text;
    IconType m_icon;
    ButtonType m_button;
public:
	[[nodiscard]] std::string get_title() const { return m_title; }
	[[nodiscard]] std::string get_text() const { return m_text; }
	[[nodiscard]] IconType get_icon_type() const { return m_icon; }
	[[nodiscard]] ButtonType get_button_type() const { return m_button; }

	void show();
private:
	explicit AlertDialog(std::string title = std::string(), std::string text = std::string(),
                         IconType icon = IconType::Warning, ButtonType button = ButtonType::Ok)
		: m_title{std::move( title )}, m_text{std::move( text )}, m_icon{ icon }, m_button{ button } {}
};

