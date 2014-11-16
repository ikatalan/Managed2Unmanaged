//  Copyright 2008-2014 Idan Katalan
//  Class1.cs
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

using System;
using MCClassLibrary;

namespace CSharpApp
{
	/// <summary>
	/// Summary description for Class1.
	/// </summary>
	class Class1
	{
		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main(string[] args)
		{
			ManagedStringClass x = new ManagedStringClass();
			
			x.PutString( "string" );
			x.PrintString ();

			ManagedClass managedClass = new ManagedClass();

			int number = ManagedClass.mConvertToHe(34);
			
			//
			// TODO: Add code to start application here
			//
		}
	}
}
