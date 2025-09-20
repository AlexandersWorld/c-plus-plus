#include "BaseRole.h"

BaseRole::BaseRole(const String& name, const String& role)
	: m_Name(name), m_Role(role) {}

const String& BaseRole::GetName() const { return m_Name; }
const String& BaseRole::GetRole() const { return m_Role; }