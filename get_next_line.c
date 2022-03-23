#include "get_next_line_h"

int get_next_line(char **str)
{
  int j, i = 0;
  char *buf = malloc(10000);
  while ((j = read(0, &buf[i], 1)) == 1 && buf[i] != '\n' && buf[i] != '\0')
    i++;
   buf[i] = '\0';
   *line = buf;
  return (j);

}
