// Base16 Google Light dark - simple terminal color setup
// Seth Wright (http://sethawright.com)
static const char *colorname[] = {
	/* Normal colors */
	"#ffffff", /*  0: Base 00 - Black   */
	"#cc342b", /*  1: Base 08 - Red     */
	"#198844", /*  2: Base 0B - Green   */
	"#fba922", /*  3: Base 0A - Yellow  */
	"#3971ed", /*  4: Base 0D - Blue    */
	"#a36ac7", /*  5: Base 0E - Magenta */
	"#3971ed", /*  6: Base 0C - Cyan    */
	"#373b41", /*  7: Base 05 - White   */

	/* Bright colors */
	"#b4b7b4", /*  8: Base 03 - Bright Black */
	"#f96a38", /* 16: Base 09 */
	"#e0e0e0", /* 18: Base 01 */
	"#c5c8c6", /* 19: Base 02 */
	"#969896", /* 20: Base 04 */
	"#282a2e", /* 21: Base 06 */
	"#3971ed", /* 17: Base 0F */
	"#1d1f21", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#373b41", /* default fg: Base 05 */
	[257] = "#ffffff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
