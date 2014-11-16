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

#pragma once
#define MAX_STRING_LENGTH  250

class StringClass
{
public:
	StringClass();
	~StringClass();

	void	PutString( const char* _str );
	void 	PrintString();
private:
	int 	mLength;
	char 	mCharacters[MAX_STRING_LENGTH];
};

int convertToHe(int _chrInput);
long convertFromHe(long _chrInput);
void strncpy(char* _dest, const char* _source, int _length);
