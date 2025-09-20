#pragma once
#include "BaseRole.h"
#include <memory>

std::unique_ptr<BaseRole> GetRole(int classNumber, const String& name);