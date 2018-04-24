// Base16 Circus dark - simple terminal color setup
// Stephan Boyer (https://github.com/stepchowfun) and Esther Wang (https://github.com/ewang12)
static const char *colorname[] = {
	/* Normal colors */
	"#191919", /*  0: Base 00 - Black   */
	"#dc657d", /*  1: Base 08 - Red     */
	"#84b97c", /*  2: Base 0B - Green   */
	"#c3ba63", /*  3: Base 0A - Yellow  */
	"#639ee4", /*  4: Base 0D - Blue    */
	"#b888e2", /*  5: Base 0E - Magenta */
	"#4bb1a7", /*  6: Base 0C - Cyan    */
	"#a7a7a7", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5f5a60", /*  8: Base 03 - Bright Black */
	"#dc657d", /*  9: Base 08 - Red          */
	"#84b97c", /* 10: Base 0B - Green        */
	"#c3ba63", /* 11: Base 0A - Yellow       */
	"#639ee4", /* 12: Base 0D - Blue         */
	"#b888e2", /* 13: Base 0E - Magenta      */
	"#4bb1a7", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#4bb1a7", /* 16: Base 09 */
	"#b888e2", /* 17: Base 0F */
	"#202020", /* 18: Base 01 */
	"#303030", /* 19: Base 02 */
	"#505050", /* 20: Base 04 */
	"#808080", /* 21: Base 06 */

	[255] = 0,

	[256] = "#a7a7a7", /* default fg: Base 05 */
	[257] = "#191919", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
