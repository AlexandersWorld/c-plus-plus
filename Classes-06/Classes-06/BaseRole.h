#pragma once
#include <string>

using String = std::string;

class BaseRole
{
protected:
	String m_Name;
	String m_Role;
public:
	BaseRole() = default;
	BaseRole(const String& name, const String& role);

	virtual ~BaseRole() = default;

	const String& GetName() const;
	const String& GetRole() const;
};
