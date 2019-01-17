// Base16 iA Light dark - simple terminal color setup
// iA Inc. (modified by aramisgithub)
static const char *colorname[] = {
	/* Normal colors */
	"#f6f6f6", /*  0: Base 00 - Black   */
	"#9c5a02", /*  1: Base 08 - Red     */
	"#38781c", /*  2: Base 0B - Green   */
	"#c48218", /*  3: Base 0A - Yellow  */
	"#48bac2", /*  4: Base 0D - Blue    */
	"#a94598", /*  5: Base 0E - Magenta */
	"#2d6bb1", /*  6: Base 0C - Cyan    */
	"#181818", /*  7: Base 05 - White   */

	/* Bright colors */
	"#898989", /*  8: Base 03 - Bright Black */
	"#9c5a02", /*  9: Base 08 - Red          */
	"#38781c", /* 10: Base 0B - Green        */
	"#c48218", /* 11: Base 0A - Yellow       */
	"#48bac2", /* 12: Base 0D - Blue         */
	"#a94598", /* 13: Base 0E - Magenta      */
	"#2d6bb1", /* 14: Base 0C - Cyan         */
	"#f8f8f8", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#c43e18", /* 16: Base 09 */
	"#8b6c37", /* 17: Base 0F */
	"#dedede", /* 18: Base 01 */
	"#bde5f2", /* 19: Base 02 */
	"#767676", /* 20: Base 04 */
	"#e8e8e8", /* 21: Base 06 */

	[255] = 0,

	[256] = "#181818", /* default fg: Base 05 */
	[257] = "#f6f6f6", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
