#include <stdio.h>
#include <stdlib.h>

void 
write_data (FILE * stream)
{
  int i;
  for (i = 0; i < 100; i++)
    fprintf (stream, "%d\n", i);
  if (ferror (stream))
    {
      fprintf (stderr, "Output to stream failed.\n");
      exit (EXIT_FAILURE);
    }
}

/*@group*/
int
main (void)
{
  FILE *output;

  output = popen ("more", "w");
  if (!output)
    {
      fprintf (stderr, "Could not run more.\n");
      return EXIT_FAILURE;
    }
  write_data (output);
  pclose (output);
  return EXIT_SUCCESS;
}
/*@end group*/
