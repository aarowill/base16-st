// Base16 Synth Midnight Dark dark - simple terminal color setup
// Michaël Ball (http://github.com/michael-ball/)
static const char *colorname[] = {
	/* Normal colors */
	"#040404", /*  0: Base 00 - Black   */
	"#b53b50", /*  1: Base 08 - Red     */
	"#06ea61", /*  2: Base 0B - Green   */
	"#dae84d", /*  3: Base 0A - Yellow  */
	"#03aeff", /*  4: Base 0D - Blue    */
	"#ea5ce2", /*  5: Base 0E - Magenta */
	"#7cede9", /*  6: Base 0C - Cyan    */
	"#dfdbdf", /*  7: Base 05 - White   */

	/* Bright colors */
	"#61507a", /*  8: Base 03 - Bright Black */
	"#e4600e", /* 16: Base 09 */
	"#141414", /* 18: Base 01 */
	"#242424", /* 19: Base 02 */
	"#bfbbbf", /* 20: Base 04 */
	"#efebef", /* 21: Base 06 */
	"#9d4d0e", /* 17: Base 0F */
	"#fffbff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#dfdbdf", /* default fg: Base 05 */
	[257] = "#040404", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
