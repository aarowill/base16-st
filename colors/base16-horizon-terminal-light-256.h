// Base16 Horizon Terminal Light dark - simple terminal color setup
// Michaël Ball (http://github.com/michael-ball/)
static const char *colorname[] = {
	/* Normal colors */
	"#fdf0ed", /*  0: Base 00 - Black   */
	"#e95678", /*  1: Base 08 - Red     */
	"#29d398", /*  2: Base 0B - Green   */
	"#fadad1", /*  3: Base 0A - Yellow  */
	"#26bbd9", /*  4: Base 0D - Blue    */
	"#ee64ac", /*  5: Base 0E - Magenta */
	"#59e1e3", /*  6: Base 0C - Cyan    */
	"#403c3d", /*  7: Base 05 - White   */

	/* Bright colors */
	"#bdb3b1", /*  8: Base 03 - Bright Black */
	"#e95678", /*  9: Base 08 - Red          */
	"#29d398", /* 10: Base 0B - Green        */
	"#fadad1", /* 11: Base 0A - Yellow       */
	"#26bbd9", /* 12: Base 0D - Blue         */
	"#ee64ac", /* 13: Base 0E - Magenta      */
	"#59e1e3", /* 14: Base 0C - Cyan         */
	"#201c1d", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f9cec3", /* 16: Base 09 */
	"#f9cbbe", /* 17: Base 0F */
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
