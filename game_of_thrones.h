#include "note_lib.h"

short game_of_thrones_divider = 2000; // 2s
short game_of_thrones_distinguisher = 0.5;

short game_of_thrones_melody[] = {
REST, NOTE_D4,
NOTE_G4, NOTE_AS4, NOTE_A4,
NOTE_G4, NOTE_D5,
NOTE_C5,
NOTE_A4,
NOTE_G4, NOTE_AS4, NOTE_A4,
NOTE_F4, NOTE_GS4,
NOTE_D4,
NOTE_D4,

NOTE_G4, NOTE_AS4, NOTE_A4,
NOTE_G4, NOTE_D5,
NOTE_F5, NOTE_E5,
NOTE_DS5, NOTE_B4,
NOTE_DS5, NOTE_D5, NOTE_CS5,
NOTE_CS4, NOTE_B4,
NOTE_G4,
NOTE_AS4
};

short game_of_thrones_tempo[] = {
2, 4,
-4, 8, 4,
2, 4,
-2,
-2,
-4, 8, 4,
2, 4,
-1,
4,

-4, 8, 4,
2, 4,
2, 4,
2, 4,
-4, 8, 4, 4,
2, 4,
-1,
4,
};