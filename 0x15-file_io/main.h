#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
ssize_t _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);

#endif
