#pragma once

class IntRange {
private:
    int m_min, m_max;
    int m_inc;
public:
	class iterator {
    private:
        int m_value;
        int m_inc;
	public:
		iterator(int value, int inc) : m_value{ value }, m_inc{ inc }  {}
	public:
		iterator &operator++();
		bool operator ==(const iterator &r) const;
		bool operator !=(const iterator &r) const;
		int operator *() const;
		//...
	};
public:	
	IntRange(int min, int max, int inc = 1);
public:
    [[nodiscard]] int GetMin() const { return m_min; }
    [[nodiscard]] int GetMax() const { return m_max; }

	[[nodiscard]] iterator begin() const
	{
		return iterator(m_min, m_inc);
	}

	[[nodiscard]] iterator end() const
	{
		return iterator(m_max + 1, m_inc);
	}
};

