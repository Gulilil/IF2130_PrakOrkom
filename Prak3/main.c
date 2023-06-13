#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CODE 0x00000000 /*---NILAI ASLI REDACTED---*/

char* flag1;
char* flag2;
char* flag3;
char* flag4;
char* flag5;
char* flag6;

unsigned int first_word = 0x00000000;
unsigned int second_word = 0x00000000;
unsigned int bullet = 0x00000000;

/* ============ SETUPS ============ */

void set_flag(char **destptr, char *src)
{
	/* SETUP FUNCTION */
}

void setup(int argc, char *argv[])
{
	/* SETUP FUNCTION */
}


/* ============ CHALLENGES ============ */

/* CHALLENGE 1 */
void usada_hacking()
{
	fprintf(stdout, "%s\n", flag1);
}

/* CHALLENGE 2 */
void interact_fantasia()
{
	fprintf(stdout, "%s\n", flag2);
}

/* CHALLENGE 3 */
void a_chan()
{
	fprintf(stdout, "%s\n", flag3);
}

/* CHALLENGE 4 */
void nodoka(unsigned int piece)
{
	char *s = flag4;
	if (piece == 0 /*---NILAI ASLI REDACTED---*/)
	{
		fprintf(stdout, "%s\n", s);
	}
}

/* CHALLENGE 5 */
void sapling()
{
	char *s = flag5;
	if (first_word == 0 /*---NILAI ASLI REDACTED---*/ && second_word == 0 /*---NILAI ASLI REDACTED---*/)
	{
		fprintf(stdout, "%s\n", s);
	}
	else
	{
		fprintf(stdout, "Not yet, please try again.\n");
	}
}

/* CHALLENGE 6 */
void nousagi()
{
	char *s = flag6;
	if (bullet == 0 /*---NILAI ASLI REDACTED---*/)
	{
		fprintf(stdout, "%s\n", s);
	}
	else
	{
		fprintf(stdout, "Not yet, please try again.\n");
	}
}

/* ??? */
void bonus_game()
{
	/* REDACTED */
}


/* ============ MAIN ============ */

void play()
{
	volatile unsigned int local = CODE;
	char buf[0  /*--- NILAI ASLI REDACTED ---*/];

	fprintf(stdout, "Here is your buffer address: %p\n\n", buf);
	fprintf(stdout, "Your turn: ");

	gets(buf);

	if (local == 0 /*--- NILAI ASLI REDACTED ---*/)
	{
		interact_fantasia();
		exit(0);
	}
	else if (local != CODE)
	{
		usada_hacking();
		exit(0);
	}

	fprintf(stdout, "Nothing happens?\n");
}

int main(int argc, char *argv[])
{
	setup(argc, argv);
	setvbuf(stdout, NULL, _IONBF, 0);
	play();
	return 0;
}
