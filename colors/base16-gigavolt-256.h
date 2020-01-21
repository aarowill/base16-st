// Base16 Gigavolt dark - simple terminal color setup
// Aidan Swope (http://github.com/Whillikers)
static const char *colorname[] = {
	/* Normal colors */
	"#202126", /*  0: Base 00 - Black   */
	"#ff661a", /*  1: Base 08 - Red     */
	"#f2e6a9", /*  2: Base 0B - Green   */
	"#ffdc2d", /*  3: Base 0A - Yellow  */
	"#40bfff", /*  4: Base 0D - Blue    */
	"#ae94f9", /*  5: Base 0E - Magenta */
	"#fb6acb", /*  6: Base 0C - Cyan    */
	"#e9e7e1", /*  7: Base 05 - White   */

	/* Bright colors */
	"#a1d2e6", /*  8: Base 03 - Bright Black */
	"#ff661a", /*  9: Base 08 - Red          */
	"#f2e6a9", /* 10: Base 0B - Green        */
	"#ffdc2d", /* 11: Base 0A - Yellow       */
	"#40bfff", /* 12: Base 0D - Blue         */
	"#ae94f9", /* 13: Base 0E - Magenta      */
	"#fb6acb", /* 14: Base 0C - Cyan         */
	"#f2fbff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#19f988", /* 16: Base 09 */
	"#6187ff", /* 17: Base 0F */
	"#2d303d", /* 18: Base 01 */
	"#5a576e", /* 19: Base 02 */
	"#cad3ff", /* 20: Base 04 */
	"#eff0f9", /* 21: Base 06 */

	[255] = 0,

	[256] = "#e9e7e1", /* default fg: Base 05 */
	[257] = "#202126", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
