#include "main.h"

/**
  * append_text_to_file - a function that appends text at the end of a file.
  * @filename: name of the file
  * @text_content: content
  *
  * Return: 1 if the file exist , -1 if it fails
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters_number;
	int rwr;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (letters_number = 0; text_content[letters_number]; letters_number++)
			;
		rwr = write(fd, text_content, letters_number);

		if (rwr == -1)
		{
			return (-1);
		}

	}
	close(fd);
	return (1);
}
