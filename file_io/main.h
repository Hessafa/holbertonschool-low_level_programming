#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
void display_elf_header(Elf64_Ehdr *header);
void print_error(char *message);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_content(int argc, char *argv[]);
void copy_content(char *file_from, char *file_to);
int _putchar(char c);
#endif /* MAIN_H */
