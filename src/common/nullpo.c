/*--------------------------------------------------------|
| _________                                               |
| \_   ___ \_______  ____   ____  __ __  ______           |
| /    \  \/\_  __ \/    \ /    \|  |  \/  ___/           |
| \     \____|  | \(  ( ) )   |  \  |  /\___ \            |
|  \______  /|__|   \____/|___|  /____//____  >           |
|         \/                   \/           \/            |
|---------------------------------------------------------|
| Equipe Atual: Cronus Dev Team                           |
| Autores: Hercules & (*)Athena Dev Team                  |
| Licença: GNU GPL                                        |
|----- Descrição: ----------------------------------------|
|                                                         |
|---------------------------------------------------------*/

#include "nullpo.h"

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include "../common/showmsg.h"

/**
 * Reports failed assertions or NULL pointers
 *
 * @param file       Source file where the error was detected
 * @param line       Line
 * @param func       Function
 * @param targetname Name of the checked symbol
 * @param title      Message title to display (i.e. failed assertion or nullpo info)
 */
void assert_report(const char *file, int line, const char *func, const char *targetname, const char *title) {
	if (file == NULL)
		file = "??";
	
	if (func == NULL || *func == '\0')
		func = "unknown";
	
	ShowError("--- %s --------------------------------------------\n", title);
	ShowError("%s:%d: '%s' in function `%s'\n", file, line, targetname, func);
	ShowError("--- end %s ----------------------------------------\n", title);
}
