// Base16 Tokyo City Terminal Dark dark - simple terminal color setup
// Michaël Ball
static const char *colorname[] = {
	/* Normal colors */
	"#171d23", /*  0: Base 00 - Black   */
	"#d95468", /*  1: Base 08 - Red     */
	"#8bd49c", /*  2: Base 0B - Green   */
	"#ebbf83", /*  3: Base 0A - Yellow  */
	"#539afc", /*  4: Base 0D - Blue    */
	"#b62d65", /*  5: Base 0E - Magenta */
	"#70e1e8", /*  6: Base 0C - Cyan    */
	"#d8e2ec", /*  7: Base 05 - White   */

	/* Bright colors */
	"#526270", /*  8: Base 03 - Bright Black */
	"#ff9e64", /* 16: Base 09 */
	"#1d252c", /* 18: Base 01 */
	"#28323a", /* 19: Base 02 */
	"#b7c5d3", /* 20: Base 04 */
	"#f6f6f8", /* 21: Base 06 */
	"#dd9d82", /* 17: Base 0F */
	"#fbfbfd", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#d8e2ec", /* default fg: Base 05 */
	[257] = "#171d23", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
