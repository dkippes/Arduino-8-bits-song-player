#include "note_lib.h"

short pacman_divider = 4000; // 1.25s
short pacman_distinguisher = 0.5;

short pacman_melody[] = {
NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5,  //1
  NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_C5,
  NOTE_C6, NOTE_G6, NOTE_E6, NOTE_C6, NOTE_G6, NOTE_E6,
  NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5,
  NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_B5,
  NOTE_FS5, NOTE_DS5, NOTE_DS5, NOTE_E5,
  NOTE_F5, NOTE_F5, NOTE_FS5, NOTE_G5,
  NOTE_G5, NOTE_GS5, NOTE_A5, NOTE_B5 
};

short pacman_tempo[] = {
  16, 16, 16, 16,
  32, -16, 8, 16,
  16, 16, 16, 32, -16, 8,
  16, 16, 16, 16,
  -16, 8, 32, 32,
  32, 32, 32, 32,
  32, 32, 32, 16, 32, 32, 32, 32
};