// Base16 Horizon Light dark - simple terminal color setup
// Michaël Ball (http://github.com/michael-ball/)
static const char *colorname[] = {
	/* Normal colors */
	"#fdf0ed", /*  0: Base 00 - Black   */
	"#f7939b", /*  1: Base 08 - Red     */
	"#94e1b0", /*  2: Base 0B - Green   */
	"#fbe0d9", /*  3: Base 0A - Yellow  */
	"#da103f", /*  4: Base 0D - Blue    */
	"#1d8991", /*  5: Base 0E - Magenta */
	"#dc3318", /*  6: Base 0C - Cyan    */
	"#403c3d", /*  7: Base 05 - White   */

	/* Bright colors */
	"#bdb3b1", /*  8: Base 03 - Bright Black */
	"#f7939b", /*  9: Base 08 - Red          */
	"#94e1b0", /* 10: Base 0B - Green        */
	"#fbe0d9", /* 11: Base 0A - Yellow       */
	"#da103f", /* 12: Base 0D - Blue         */
	"#1d8991", /* 13: Base 0E - Magenta      */
	"#dc3318", /* 14: Base 0C - Cyan         */
	"#201c1d", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f6661e", /* 16: Base 09 */
	"#e58c92", /* 17: Base 0F */
	"#fadad1", /* 18: Base 01 */
	"#f9cbbe", /* 19: Base 02 */
	"#948c8a", /* 20: Base 04 */
	"#302c2d", /* 21: Base 06 */

	[255] = 0,

	[256] = "#403c3d", /* default fg: Base 05 */
	[257] = "#fdf0ed", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
