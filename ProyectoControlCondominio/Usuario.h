#pragma once

using namespace System;

public ref class Usuario {
	private:
		String^ codigo;
	public:
		Usuario();
		Usuario(String^ codigo);
};
