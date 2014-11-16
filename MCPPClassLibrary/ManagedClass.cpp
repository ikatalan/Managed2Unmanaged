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

#using <mscorlib.dll>

#include ".\managedclass.h"
#include "unmanaged.h"

using namespace MCClassLibrary;

ManagedClass::ManagedClass(void)
{
	//Shout Hooray.
}

ManagedClass::~ManagedClass(void)
{
	//Stop Shouting.
}

int ManagedClass::mConvertToHe(int _chrInput)
{
	return ( convertToHe ( _chrInput ) );
}

long ManagedClass::mConvertFromHe(long _chrInput)
{
	return ( convertFromHe ( _chrInput ) );
}

void ManagedClass::mStrncpy(char* _dest, const char* _source, int _length)
{
	strncpy ( _dest, _source, _length );
}

