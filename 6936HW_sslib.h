// BRIAN SUMNER
// xxxxx6936
// <SUMNER_STANDARD_LIBRARY>
// FILE: 6936HW_sslib.h






#ifndef SUMNER_STANDARD_LIBRARY
#define SUMNER_STANDARD_LIBRARY

#include <string>

namespace sslib_rev01

{



	std::string ctr(std::string arg_string, int arg_lines_above = 0, int arg_lines_below = 0, int arg_left_align = 0);
	std::string ctr(int arg_left_align, std::string arg_string, int arg_lines_above = 0, int arg_lines_below = 0);

	std::string cr(int arg_lines);

	std::string promptString(std::string arg_string);

	bool   promptYN    (std::string arg_string,   bool acceptLowerCase = true);
	int    promptInt   (std::string arg_string,    int arg_lower = 777,    int arg_upper = -420);
	double promptDouble(std::string arg_string, double arg_lower = 777, double arg_upper = -420);

	int simpleMenu(std::string arg_string_menu, std::string arg_string_prompt, int arg_numberOfChoices);
	int simpleMenu(std::string arg_string_menuPrompt, int arg_numberOfChoices);

	std::string bencode(std::string arg_string, int arg_offset);

/*
	// COPY INTO IMPLEMENTATION TO USE BENDEX AND BENLIST

	std::string bendex(int arg_bendex);
	void benlist();

*/




}

#endif
