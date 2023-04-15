#include "main.h"

/**
  * create_file -  function that creates a file.
  * @filename: name of the file.
  * @text_content: content written in the file.
  *
  * Return: 1 if successful, -1 if failed
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters_number;
	int rwr;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (letters_number = 0; text_content[letters_number]; letters_number++)
		;
	rwr = write(fd, text_content, letters_number);

	if (rwr == 1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
