#ifndef _LOADSAVE_H_
#define _LOADSAVE_H_

int savegame(char *filename) FASTCALL;
int loadgame(char *filename) FASTCALL;
char *i2s(char *s, int v);


#endif