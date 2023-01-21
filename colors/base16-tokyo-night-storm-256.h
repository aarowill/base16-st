// Base16 Tokyo Night Storm dark - simple terminal color setup
// Michaël Ball
static const char *colorname[] = {
	/* Normal colors */
	"#24283b", /*  0: Base 00 - Black   */
	"#c0caf5", /*  1: Base 08 - Red     */
	"#9ece6a", /*  2: Base 0B - Green   */
	"#0db9d7", /*  3: Base 0A - Yellow  */
	"#2ac3de", /*  4: Base 0D - Blue    */
	"#bb9af7", /*  5: Base 0E - Magenta */
	"#b4f9f8", /*  6: Base 0C - Cyan    */
	"#a9b1d6", /*  7: Base 05 - White   */

	/* Bright colors */
	"#444b6a", /*  8: Base 03 - Bright Black */
	"#c0caf5", /*  9: Base 08 - Red          */
	"#9ece6a", /* 10: Base 0B - Green        */
	"#0db9d7", /* 11: Base 0A - Yellow       */
	"#2ac3de", /* 12: Base 0D - Blue         */
	"#bb9af7", /* 13: Base 0E - Magenta      */
	"#b4f9f8", /* 14: Base 0C - Cyan         */
	"#d5d6db", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#a9b1d6", /* 16: Base 09 */
	"#f7768e", /* 17: Base 0F */
	"#16161e", /* 18: Base 01 */
	"#343a52", /* 19: Base 02 */
	"#787c99", /* 20: Base 04 */
	"#cbccd1", /* 21: Base 06 */

	[255] = 0,

	[256] = "#a9b1d6", /* default fg: Base 05 */
	[257] = "#24283b", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
