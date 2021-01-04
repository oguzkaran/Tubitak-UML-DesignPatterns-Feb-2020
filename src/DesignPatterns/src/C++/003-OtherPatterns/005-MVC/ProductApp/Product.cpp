#include "Product.h"

using namespace std;

void Product::SetId(size_t id)
{
	m_id = id;
}

Product::operator std::string()  const
{	
	return string{ "[" }
		.append(to_string(m_id))
		.append("]")
		.append(m_name)
		.append(":")
		.append(to_string(m_price * m_stock));
}