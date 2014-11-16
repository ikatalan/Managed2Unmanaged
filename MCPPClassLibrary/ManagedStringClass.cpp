//  Copyright 2008-2014 Idan Katalan
//  This file is part of Managed2Unmanaged.

//   Managed2Unmanaged is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.

//   Managed2Unmanaged is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.

//   You should have received a copy of the GNU General Public License
//   along with Managed2Unmanaged.  If not, see <http://www.gnu.org/licenses/>.
//
//   Developed By: Idan Katalan ikatalan at gmail dot com
//
//////////////////////////////////////////////////////////////////////

#include ".\managedstringclass.h"

using namespace MCClassLibrary;

ManagedStringClass::ManagedStringClass(void)
{
	mStringClass = new StringClass();
}

ManagedStringClass::~ManagedStringClass(void)
{
	delete mStringClass;
}

void	ManagedStringClass::PutString( const char* _str )
{
    this->mStringClass->PutString(_str);
}

void 	ManagedStringClass::PrintString()
{
	this->mStringClass->PrintString();
}


