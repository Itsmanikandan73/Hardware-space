#include <stdint.h>

typedef struct {
  uint8_t   memory[4096];           // 4k of RAM
  uint8_t   V[16];                  // 16 8-bit registers (V0 - VF)
  uint8_t   I;                      // Index register
  uint8_t   pc;                     // Program Counter

  uint16_t  stack[16];              // Stack for subroutines
  uint8_t   sp;                     // Stack Pointer

  uint8_t   delay_timer;            // Delay timer(60Hz)
  uint8_t   sound_timer;            // Sound timer(60Hz)

  uint8_t   display[64 * 32];       // Graphics monochrome display (64x32 pixels)
  uint8_t   keypad[16];             // Hex keypad (0x0 - 0xF)

} chip8;


