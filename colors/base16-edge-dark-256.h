// Base16 Edge Dark dark - simple terminal color setup
// cjayross (https://github.com/cjayross)
static const char *colorname[] = {
	/* Normal colors */
	"#262729", /*  0: Base 00 - Black   */
	"#e77171", /*  1: Base 08 - Red     */
	"#a1bf78", /*  2: Base 0B - Green   */
	"#dbb774", /*  3: Base 0A - Yellow  */
	"#73b3e7", /*  4: Base 0D - Blue    */
	"#d390e7", /*  5: Base 0E - Magenta */
	"#5ebaa5", /*  6: Base 0C - Cyan    */
	"#b7bec9", /*  7: Base 05 - White   */

	/* Bright colors */
	"#3e4249", /*  8: Base 03 - Bright Black */
	"#e77171", /*  9: Base 08 - Red          */
	"#a1bf78", /* 10: Base 0B - Green        */
	"#dbb774", /* 11: Base 0A - Yellow       */
	"#73b3e7", /* 12: Base 0D - Blue         */
	"#d390e7", /* 13: Base 0E - Magenta      */
	"#5ebaa5", /* 14: Base 0C - Cyan         */
	"#3e4249", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#e77171", /* 16: Base 09 */
	"#5ebaa5", /* 17: Base 0F */
	"#88909f", /* 18: Base 01 */
	"#b7bec9", /* 19: Base 02 */
	"#73b3e7", /* 20: Base 04 */
	"#d390e7", /* 21: Base 06 */

	[255] = 0,

	[256] = "#b7bec9", /* default fg: Base 05 */
	[257] = "#262729", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
