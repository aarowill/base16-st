// Base16 Darcula dark - simple terminal color setup
// jetbrains
static const char *colorname[] = {
	/* Normal colors */
	"#2b2b2b", /*  0: Base 00 - Black   */
	"#4eade5", /*  1: Base 08 - Red     */
	"#6a8759", /*  2: Base 0B - Green   */
	"#bbb529", /*  3: Base 0A - Yellow  */
	"#9876aa", /*  4: Base 0D - Blue    */
	"#cc7832", /*  5: Base 0E - Magenta */
	"#629755", /*  6: Base 0C - Cyan    */
	"#a9b7c6", /*  7: Base 05 - White   */

	/* Bright colors */
	"#606366", /*  8: Base 03 - Bright Black */
	"#4eade5", /*  9: Base 08 - Red          */
	"#6a8759", /* 10: Base 0B - Green        */
	"#bbb529", /* 11: Base 0A - Yellow       */
	"#9876aa", /* 12: Base 0D - Blue         */
	"#cc7832", /* 13: Base 0E - Magenta      */
	"#629755", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#689757", /* 16: Base 09 */
	"#808080", /* 17: Base 0F */
	"#323232", /* 18: Base 01 */
	"#323232", /* 19: Base 02 */
	"#a4a3a3", /* 20: Base 04 */
	"#ffc66d", /* 21: Base 06 */

	[255] = 0,

	[256] = "#a9b7c6", /* default fg: Base 05 */
	[257] = "#2b2b2b", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
