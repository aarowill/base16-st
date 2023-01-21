// Base16 Qualia dark - simple terminal color setup
// isaacwhanson
static const char *colorname[] = {
	/* Normal colors */
	"#101010", /*  0: Base 00 - Black   */
	"#efa6a2", /*  1: Base 08 - Red     */
	"#80c990", /*  2: Base 0B - Green   */
	"#e6a3dc", /*  3: Base 0A - Yellow  */
	"#50cacd", /*  4: Base 0D - Blue    */
	"#e0af85", /*  5: Base 0E - Magenta */
	"#c8c874", /*  6: Base 0C - Cyan    */
	"#c0c0c0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#454545", /*  8: Base 03 - Bright Black */
	"#a3b8ef", /* 16: Base 09 */
	"#454545", /* 18: Base 01 */
	"#454545", /* 19: Base 02 */
	"#808080", /* 20: Base 04 */
	"#c0c0c0", /* 21: Base 06 */
	"#808080", /* 17: Base 0F */
	"#454545", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#c0c0c0", /* default fg: Base 05 */
	[257] = "#101010", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
