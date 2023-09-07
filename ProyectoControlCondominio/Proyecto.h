#pragma once
#include "Proyecto.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Proyecto {
	private: 
		String^ codigo;
		int cantCondominios;
	public:
		Proyecto();
		Proyecto(String^ codigo, int cantCondominios);

};