/*
 * commander.h
 *
 * Created: 11/02/2023 10:13:49 p. m.
 *  Author: Ricardo Zamudio C.
 */

#include <avr/io.h>

#ifndef COMMANDER_H_
#define COMMANDER_H_

#define MSG_OK "\r\nOK\r\n"
#define MAIN_COMMAND_LENGTH 5
#define NUMBER_OF_RELAYS 4

#define BLANK_SPACE " "
#define NEW_LINE "\n"
#define RETURN_CARRIAGE "\r"

void executeCommand(char *command);
void send_help_info();
void command_switcher(char *command);
void clear_command_buffer(char *command);

// Control functions:
void set_relay_states(char *command);
void relay_state_changer(char relay_id, char state, int cursor);
int get_operation(char *command);
int read_operation(char *command, int cursor);

#endif /* COMMANDER_H_ */