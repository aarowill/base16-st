// Base16 Tomorrow dark - simple terminal color setup
// Chris Kempson (http://chriskempson.com)
static const char *colorname[] = {
	/* Normal colors */
	"#ffffff", /*  0: Base 00 - Black   */
	"#c82829", /*  1: Base 08 - Red     */
	"#718c00", /*  2: Base 0B - Green   */
	"#eab700", /*  3: Base 0A - Yellow  */
	"#4271ae", /*  4: Base 0D - Blue    */
	"#8959a8", /*  5: Base 0E - Magenta */
	"#3e999f", /*  6: Base 0C - Cyan    */
	"#4d4d4c", /*  7: Base 05 - White   */

	/* Bright colors */
	"#8e908c", /*  8: Base 03 - Bright Black */
	"#c82829", /*  9: Base 08 - Red          */
	"#718c00", /* 10: Base 0B - Green        */
	"#eab700", /* 11: Base 0A - Yellow       */
	"#4271ae", /* 12: Base 0D - Blue         */
	"#8959a8", /* 13: Base 0E - Magenta      */
	"#3e999f", /* 14: Base 0C - Cyan         */
	"#1d1f21", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f5871f", /* 16: Base 09 */
	"#a3685a", /* 17: Base 0F */
	"#e0e0e0", /* 18: Base 01 */
	"#d6d6d6", /* 19: Base 02 */
	"#969896", /* 20: Base 04 */
	"#282a2e", /* 21: Base 06 */

	[255] = 0,

	[256] = "#4d4d4c", /* default fg: Base 05 */
	[257] = "#ffffff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
