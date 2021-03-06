//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2020 Ryo Suzuki
//	Copyright (c) 2016-2020 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <iostream>
# include <Common/Siv3DEngine.hpp>

void Main();

int main(int, char*[])
{
	std::cout << "OpenSiv3D for macOS\n";
	
	using namespace s3d;
	Siv3DEngine engine;
	
	Main();

	return 0;
}
