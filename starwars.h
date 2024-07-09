#include "note_lib.h"

short starwars_divider = 1500; // 1.25s
short starwars_distinguisher = 0.5;

short starwars_melody[] = {
  NOTE_AS4, NOTE_AS4, NOTE_AS4, //1
NOTE_F5, NOTE_C6,
NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,
NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,
NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_G5, NOTE_C5, NOTE_C5, NOTE_C5,
NOTE_F5, NOTE_C6,
NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,

NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6, //8
NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_G5, NOTE_C5, NOTE_C5,
NOTE_D5, NOTE_D5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F5,
NOTE_F5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_D5, NOTE_E5, NOTE_C5,
NOTE_D5, NOTE_D5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F5,
NOTE_C6, NOTE_G5,
REST, NOTE_C5,
NOTE_D5, NOTE_D5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F5,
NOTE_F5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_D5, NOTE_E5, NOTE_C6,
NOTE_F6, NOTE_DS6, NOTE_CS6, NOTE_C6, NOTE_AS5, NOTE_GS5, NOTE_G5, NOTE_F5,
NOTE_C6
};

short starwars_tempo[] = {
  8, 8, 8, //1
2, 2,
8, 8, 8, 2, 4,
8, 8, 8, 2, 4,
8, 8, 8, 2, 8, 8, 8,
2, 2,
8, 8, 8, 2, 4,

8, 8, 8, 2, 4, //8
8, 8, 8, 2, -8, 16,
-4, 8, 8, 8, 8, 8,
8, 8, 8, 8, 4, 8, 4, -8, 16,
-4, 8, 8, 8, 8, 8,
-8, 16, 2,
8, 8,
-4, 8, 8, 8, 8, 8,
8, 8, 8, 8, 4, 8, 4, -8, 16,
4, 8, 4, 8, 8, 4, 8,
1
};