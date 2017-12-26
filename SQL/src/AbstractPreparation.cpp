//
// AbstractPreparation.cpp
//
// Library: Data
// Package: DataCore
// Module:  AbstractPreparation
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#include "Poco/SQL/AbstractPreparation.h"


namespace Poco {
namespace SQL {


AbstractPreparation::AbstractPreparation(PreparatorPtr pPreparator):
	_pPreparator(pPreparator)
{
	poco_assert_dbg (_pPreparator);
}


AbstractPreparation::~AbstractPreparation()
{
}


} } // namespace Poco::Data
