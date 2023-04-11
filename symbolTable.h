/*
Group No. : 42
ID: 2020A7PS1214P	Name: Darshan Abhaykumar
ID: 2020A7PS0970P	Name: Debjit Kar
ID:2020A7PS0986P	Name: Nidhish Parekh
*/
#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H
#include "symbolTableDef.h"

extern GlobalSymTable gSymTable[MODULO];

void createSymTable(ASTNODE asTree);
void initSymTable();
void insertGlobalSym(GLOBALSYMTABLE htable, char* key, int hashed, SYMTABLE Inp, SYMTABLE Outp, int sizeIP, int sizeOP);
SYMTABLE getfromGlobal(char *lexeme, GLOBALSYMTABLE htable);
void printGlobalTable(GLOBALSYMTABLE htable);


#endif