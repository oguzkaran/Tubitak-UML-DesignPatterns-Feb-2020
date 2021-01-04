#pragma once
class Fighter {
private:
    int m_attack;
    int m_defence;
    //...
public:
	Fighter(int attack, int defence) : m_attack{ attack }, m_defence{ defence } {}
public:
	void SetAttack(int attack);
	void SetDefence(int defence);
	[[nodiscard]]int GetAttack() const { return m_attack; }
    [[nodiscard]]int GetDefence() const { return m_defence; }

};

