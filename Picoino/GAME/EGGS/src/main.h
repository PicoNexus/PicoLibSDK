
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// tiles
#define TILEW	30	// tile width
#define TILEH	30	// tile height
#define TILESIZE (TILEW*TILEH) // tile size in words

// game board (size 240x240 pixels)
//#define BOARDW0	12	// board width with fence
//#define BOARDH0	12	// board height width fence
//#define BOARDSIZE0 (BOARDW0*BOARDH0) // board size with fence
#define BOARDW	8	// game board width
#define BOARDH	8	// game board height
#define BOARDSIZE (BOARDW*BOARDH) // board size with fence

// frame
#define FRAMEW	80	// frame width
#define FRAMEH	240	// frame height
#define FRAMEX	240	// frame X coordinate
#define FRAMEY	120	// player 2 offset

// computer image
#define	COMPW	12	// computer width
#define COMPH	10	// computer height
#define COMPX	(8+FRAMEX) //(57+FRAMEX) // computer X offset
#define COMPY	11	// computer Y offset

// select frame
#define SELECTW	80	// select width
#define SELECTH	50	// select height
#define SELECTX	FRAMEX	// select X offset
#define SELECTY	0	// select Y offset

// score
#define SCOREX	(35+FRAMEX) // score X offset
#define SCOREY	64	// score Y offset
#define WINX	(35+FRAMEX) // win X offset
#define WINY	96	// win Y offset
#define SCORECOL COL_WHITE // score color
#define SCOREBG 0x4B	// score background

// tiles
#define TILE_BLACK	0	// black

#define TILE_EMPTY	1	// empty
#define TILE_DOT	2	// dot
#define TILE_EGG	3	// egg
#define TILE_CHICKEN	4	// chicken
#define TILE_HEN	5	// hen
#define TILE_EGGWIN	6	// egg win
#define TILE_HENWIN	7	// hen win

#define TILE_EMPTY2	8	// empty with frame
#define TILE_DOT2	9	// dot with frame
#define TILE_EGG2	10	// egg with frame
#define TILE_CHICKEN2	11	// chicken with frame
#define TILE_HEN2	12	// hen with frame
#define TILE_EGGWIN2	13	// egg win with frame
#define TILE_HENWIN2	14	// hen win with frame

#define TILE_NUM	15	// number of tiles

#define TILE_OFFMIN	TILE_EMPTY // first tile without cursor
#define TILE_OFFMAX	TILE_HENWIN // last tile without cursor
#define TILE_ONMIN	TILE_EMPTY2 // first tile without cursor
#define TILE_ONMAX	TILE_HENWIN2 // last tile without cursor

// images

// format: 8-bit pixel graphics
// image width: 12 pixels
// image height: 10 lines
// image pitch: 12 bytes
extern const u8 ComputerImg[120] __attribute__ ((aligned(4)));

// format: 8-bit pixel graphics
// image width: 80 pixels
// image height: 240 lines
// image pitch: 80 bytes
extern const u8 FrameImg[19200] __attribute__ ((aligned(4)));

// format: 8-bit pixel graphics
// image width: 320 pixels
// image height: 240 lines
// image pitch: 320 bytes
extern const u8 OpenImg[76800] __attribute__ ((aligned(4)));

// format: 8-bit pixel graphics
// image width: 80 pixels
// image height: 50 lines
// image pitch: 80 bytes
extern const u8 SelectImg[4000] __attribute__ ((aligned(4)));

// format: 8-bit pixel graphics
// image width: 32 pixels
// image height: 450 lines
// image pitch: 32 bytes
extern const u8 TilesImg[14400] __attribute__ ((aligned(4)));

// sounds
extern const u8 BeepSnd[1102];
extern const u8 Beep2Snd[1764];
extern const u8 FanfareSnd[74871];
extern const u8 MappleSnd[384007];

#endif // _MAIN_H