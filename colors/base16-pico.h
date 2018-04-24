// Base16 Pico dark - simple terminal color setup
// PICO-8 (http://www.lexaloffle.com/pico-8.php)
static const char *colorname[] = {
	/* Normal colors */
	"#000000", /*  0: Base 00 - Black   */
	"#ff004d", /*  1: Base 08 - Red     */
	"#00e756", /*  2: Base 0B - Green   */
	"#fff024", /*  3: Base 0A - Yellow  */
	"#83769c", /*  4: Base 0D - Blue    */
	"#ff77a8", /*  5: Base 0E - Magenta */
	"#29adff", /*  6: Base 0C - Cyan    */
	"#5f574f", /*  7: Base 05 - White   */

	/* Bright colors */
	"#008751", /*  8: Base 03 - Bright Black */
	"#ffa300", /* 16: Base 09 */
	"#1d2b53", /* 18: Base 01 */
	"#7e2553", /* 19: Base 02 */
	"#ab5236", /* 20: Base 04 */
	"#c2c3c7", /* 21: Base 06 */
	"#ffccaa", /* 17: Base 0F */
	"#fff1e8", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#5f574f", /* default fg: Base 05 */
	[257] = "#000000", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
