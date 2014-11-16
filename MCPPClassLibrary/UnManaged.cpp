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

#include <stdio.h>
#include <string.h>
#include "unmanaged.h"

//////
// StringClass implementation
//////
StringClass::StringClass()
{
	//some unmanaged implementation here
}
StringClass::~StringClass()
{
	//some unmanaged implementation here
}

void	StringClass::PutString( const char* _str )
{
	memmove (this->mCharacters, _str, strlen ( _str )  );
}

void 	StringClass::PrintString()
{
	printf ("%s",this->mCharacters);
}

//////
//Global functions implementation
//////
int convertToHe(int _chrInput)
{
	//some unmanaged implementation here
	return (0);
}
long convertFromHe(long _chrInput)
{
	//some unmanaged implementation here
	return (0);
}
void strncpy(char* _dest, const char* _source, int _length)
{
	//some unmanaged implementation here
}
