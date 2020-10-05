// Base16 Eva Dim dark - simple terminal color setup
// kjakapat (https://github.com/kjakapat)
static const char *colorname[] = {
	/* Normal colors */
	"#2a3b4d", /*  0: Base 00 - Black   */
	"#c4676c", /*  1: Base 08 - Red     */
	"#5de561", /*  2: Base 0B - Green   */
	"#cfd05d", /*  3: Base 0A - Yellow  */
	"#1ae1dc", /*  4: Base 0D - Blue    */
	"#9c6cd3", /*  5: Base 0E - Magenta */
	"#4b8f77", /*  6: Base 0C - Cyan    */
	"#9fa2a6", /*  7: Base 05 - White   */

	/* Bright colors */
	"#55799c", /*  8: Base 03 - Bright Black */
	"#c4676c", /*  9: Base 08 - Red          */
	"#5de561", /* 10: Base 0B - Green        */
	"#cfd05d", /* 11: Base 0A - Yellow       */
	"#1ae1dc", /* 12: Base 0D - Blue         */
	"#9c6cd3", /* 13: Base 0E - Magenta      */
	"#4b8f77", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff9966", /* 16: Base 09 */
	"#bb64a9", /* 17: Base 0F */
	"#3d566f", /* 18: Base 01 */
	"#4b6988", /* 19: Base 02 */
	"#7e90a3", /* 20: Base 04 */
	"#d6d7d9", /* 21: Base 06 */

	[255] = 0,

	[256] = "#9fa2a6", /* default fg: Base 05 */
	[257] = "#2a3b4d", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
