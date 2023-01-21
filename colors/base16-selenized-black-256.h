// Base16 selenized-black dark - simple terminal color setup
// Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
static const char *colorname[] = {
	/* Normal colors */
	"#181818", /*  0: Base 00 - Black   */
	"#ed4a46", /*  1: Base 08 - Red     */
	"#70b433", /*  2: Base 0B - Green   */
	"#dbb32d", /*  3: Base 0A - Yellow  */
	"#368aeb", /*  4: Base 0D - Blue    */
	"#a580e2", /*  5: Base 0E - Magenta */
	"#3fc5b7", /*  6: Base 0C - Cyan    */
	"#b9b9b9", /*  7: Base 05 - White   */

	/* Bright colors */
	"#777777", /*  8: Base 03 - Bright Black */
	"#ed4a46", /*  9: Base 08 - Red          */
	"#70b433", /* 10: Base 0B - Green        */
	"#dbb32d", /* 11: Base 0A - Yellow       */
	"#368aeb", /* 12: Base 0D - Blue         */
	"#a580e2", /* 13: Base 0E - Magenta      */
	"#3fc5b7", /* 14: Base 0C - Cyan         */
	"#dedede", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#e67f43", /* 16: Base 09 */
	"#eb6eb7", /* 17: Base 0F */
	"#252525", /* 18: Base 01 */
	"#3b3b3b", /* 19: Base 02 */
	"#777777", /* 20: Base 04 */
	"#dedede", /* 21: Base 06 */

	[255] = 0,

	[256] = "#b9b9b9", /* default fg: Base 05 */
	[257] = "#181818", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
