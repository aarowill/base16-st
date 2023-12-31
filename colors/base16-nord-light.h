// Base16 Nord Light dark - simple terminal color setup
// threddast, based on fuxialexander&#39;s doom-nord-light-theme (Doom Emacs)
static const char *colorname[] = {
	/* Normal colors */
	"#e5e9f0", /*  0: Base 00 - Black   */
	"#99324b", /*  1: Base 08 - Red     */
	"#4f894c", /*  2: Base 0B - Green   */
	"#9a7500", /*  3: Base 0A - Yellow  */
	"#3b6ea8", /*  4: Base 0D - Blue    */
	"#97365b", /*  5: Base 0E - Magenta */
	"#398eac", /*  6: Base 0C - Cyan    */
	"#2e3440", /*  7: Base 05 - White   */

	/* Bright colors */
	"#aebacf", /*  8: Base 03 - Bright Black */
	"#ac4426", /* 16: Base 09 */
	"#c2d0e7", /* 18: Base 01 */
	"#b8c5db", /* 19: Base 02 */
	"#60728c", /* 20: Base 04 */
	"#3b4252", /* 21: Base 06 */
	"#5272af", /* 17: Base 0F */
	"#29838d", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#2e3440", /* default fg: Base 05 */
	[257] = "#e5e9f0", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
