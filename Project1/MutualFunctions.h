#pragma once
#ifndef MUTUALFUNCTIONS_H
#define MUTUALFUNCTIONS_H
#define _CRT_SECURE_NO_WARNINGS
#define DOCTORPASSWORD "0123456789"
#define MAXSIZE 1000
#include "sqlite3.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char* toString(const char* str); // returns a dynamical allocation of a char[]


#endif // !MUTUALFUNCTIONS_H
