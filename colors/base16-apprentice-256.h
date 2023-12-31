// Base16 Apprentice dark - simple terminal color setup
// romainl
static const char *colorname[] = {
	/* Normal colors */
	"#262626", /*  0: Base 00 - Black   */
	"#444444", /*  1: Base 08 - Red     */
	"#ffffaf", /*  2: Base 0B - Green   */
	"#87af87", /*  3: Base 0A - Yellow  */
	"#8787af", /*  4: Base 0D - Blue    */
	"#5fafaf", /*  5: Base 0E - Magenta */
	"#87afd7", /*  6: Base 0C - Cyan    */
	"#5f5f87", /*  7: Base 05 - White   */

	/* Bright colors */
	"#87875f", /*  8: Base 03 - Bright Black */
	"#444444", /*  9: Base 08 - Red          */
	"#ffffaf", /* 10: Base 0B - Green        */
	"#87af87", /* 11: Base 0A - Yellow       */
	"#8787af", /* 12: Base 0D - Blue         */
	"#5fafaf", /* 13: Base 0E - Magenta      */
	"#87afd7", /* 14: Base 0C - Cyan         */
	"#6c6c6c", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff8700", /* 16: Base 09 */
	"#bcbcbc", /* 17: Base 0F */
	"#af5f5f", /* 18: Base 01 */
	"#5f875f", /* 19: Base 02 */
	"#5f87af", /* 20: Base 04 */
	"#5f8787", /* 21: Base 06 */

	[255] = 0,

	[256] = "#5f5f87", /* default fg: Base 05 */
	[257] = "#262626", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
