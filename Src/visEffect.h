/*

  WS2812B CPU and memory efficient library

  Date: 28.9.2016

  Author: Martin Hubacek
  	  	  http://www.martinhubacek.cz
  	  	  @hubmartin

  Licence: MIT License

*/

#ifndef VISEFFECT_H_
#define VISEFFECT_H_

#include <stdint.h>

// RGB Framebuffers
uint8_t frameBuffer[16][512];

void visInit();
void visHandle();

#endif /* VISEFFECT_H_ */
