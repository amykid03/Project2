#pragma once
#ifndef HEADER_H
#define HEADER_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

extern int com;
extern int player;
extern int dice;
extern int dice1;
extern int dice2;
extern int two;
extern int a;

extern int p_x;
extern int p_y;
extern int p_e;

extern int c_x;
extern int c_y;
extern int c_e;

void print_status(int, int, int, int, int, int);
int roll_dice(int);
void computer(int);
int rolling_dice1();
int rolling_dice2();
int rolling_dice3();
void x_move();
void y_move();

#endif