/*
 * Library: lib_console.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: June 04, 2014
 * Description:
 */
#ifndef CONSOLE_H_
#define CONSOLE_H_

#define API_PRINTF_MAXLENGTH 255

/**
 * Print function alias for standard printf
 */
void lib_print(const char* format, ...);

/**
 * Print test function
 */
void lib_print_test(void);

#endif /* CONSOLE_H_ */
