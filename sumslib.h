//############################################################################
// BRIAN SUMNER                                                              #
// UCDENVER DEPARTMENT OF COMPUTER SCIENCE                                   #
// <SUMNER_STANDARD_LIBRARY>                                                 #
// FILE: sumslib.h                                                           #
//############################################################################






#ifndef SUMNER_STANDARD_LIBRARY
#define SUMNER_STANDARD_LIBRARY

#include <string>

namespace sumslib_rev02

{


	// PRINT MESSAGE TO CONSOLE
	void msg(std::string arg_string_message, int arg_lines_above = 0, int arg_lines_below = 1);
	void error(std::string arg_string_message, int arg_lines_above = 0, int arg_lines_below = 0);

	// CENTER STRING
	std::string ctr(std::string arg_string, int arg_lines_above = 0, int arg_lines_below = 0, int arg_left_align = 0);
	std::string ctr(int arg_left_align, std::string arg_string, int arg_lines_above = 0, int arg_lines_below = 0);

	// CARRIAGE RETURN(S) WITH LINE FEED(S)
	std::string lf(int arg_lines = 1);

	// PROMPTS STRING
	std::string promptString(std::string arg_string);

	// PROMPTS 'Y' OR 'N'
	bool   promptYN    (std::string arg_string,   bool acceptLowerCase = true);

	// PROMPTS 'Y' OR ANYTHING ELSE
	bool   promptY    (std::string arg_string,   bool acceptLowerCase = true);

	// PROMPTS INTEGER
	int    promptInt   (std::string arg_string,    int arg_lower = 777,    int arg_upper = -420);

	// PROMPTS DOUBLE
	double promptDouble(std::string arg_string, double arg_lower = 777, double arg_upper = -420);

	// SYSTEM PAUSE
	void pause(std::string arg_string, int arg_lines_above = 0, int arg_lines_below = 0);
	void pause(int arg_lines_above = 3, int arg_lines_below = 3);

	// PROVIDES A SIMPLE MENU
	int simpleMenu(std::string arg_string_menu, std::string arg_string_prompt, int arg_numberOfChoices);
	int simpleMenu(std::string arg_string_menuPrompt, int arg_numberOfChoices);

	// BRIAN'S STRING ENCODER
	std::string bencode(std::string arg_string, int arg_offset);

/*

	// COPY INTO IMPLEMENTATION TO USE BENDEX AND BENLIST


 	// BENCODE DATA STORAGE SELECTOR
	std::string bendex(int arg_bendex);

	//
	void benlist();

*/




}

#endif
