// Base16 Apathy dark - simple terminal color setup
// Jannik Siebert (https://github.com/janniks)
static const char *colorname[] = {
	/* Normal colors */
	"#031a16", /*  0: Base 00 - Black   */
	"#3e9688", /*  1: Base 08 - Red     */
	"#883e96", /*  2: Base 0B - Green   */
	"#3e4c96", /*  3: Base 0A - Yellow  */
	"#96883e", /*  4: Base 0D - Blue    */
	"#4c963e", /*  5: Base 0E - Magenta */
	"#963e4c", /*  6: Base 0C - Cyan    */
	"#81b5ac", /*  7: Base 05 - White   */

	/* Bright colors */
	"#2b685e", /*  8: Base 03 - Bright Black */
	"#3e7996", /* 16: Base 09 */
	"#0b342d", /* 18: Base 01 */
	"#184e45", /* 19: Base 02 */
	"#5f9c92", /* 20: Base 04 */
	"#a7cec8", /* 21: Base 06 */
	"#3e965b", /* 17: Base 0F */
	"#d2e7e4", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#81b5ac", /* default fg: Base 05 */
	[257] = "#031a16", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
