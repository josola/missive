/*
 * Helper utility for console in.
 * This program uses the MIT license.
 * Written by Jordan Sola 2019-2020
 */

#ifndef CONSOLE_IN_UTIL_H
#define CONSOLE_IN_UTIL_H

class ConsoleInUtil
{
public:
    static int GetIntInput();
    static bool CorrectInput(int input);
    static void FixIntInput();
    static void ClearInput();

private:

};

#endif