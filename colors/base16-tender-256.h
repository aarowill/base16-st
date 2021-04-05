// Base16 tender dark - simple terminal color setup
// Jacobo Tabernero (https://github/com/jacoborus/tender.vim)
static const char *colorname[] = {
	/* Normal colors */
	"#282828", /*  0: Base 00 - Black   */
	"#f43753", /*  1: Base 08 - Red     */
	"#c9d05c", /*  2: Base 0B - Green   */
	"#ffc24b", /*  3: Base 0A - Yellow  */
	"#b3deef", /*  4: Base 0D - Blue    */
	"#d3b987", /*  5: Base 0E - Magenta */
	"#73cef4", /*  6: Base 0C - Cyan    */
	"#eeeeee", /*  7: Base 05 - White   */

	/* Bright colors */
	"#1d1d1d", /*  8: Base 03 - Bright Black */
	"#f43753", /*  9: Base 08 - Red          */
	"#c9d05c", /* 10: Base 0B - Green        */
	"#ffc24b", /* 11: Base 0A - Yellow       */
	"#b3deef", /* 12: Base 0D - Blue         */
	"#d3b987", /* 13: Base 0E - Magenta      */
	"#73cef4", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#dc9656", /* 16: Base 09 */
	"#a16946", /* 17: Base 0F */
	"#383838", /* 18: Base 01 */
	"#484848", /* 19: Base 02 */
	"#b8b8b8", /* 20: Base 04 */
	"#e8e8e8", /* 21: Base 06 */

	[255] = 0,

	[256] = "#eeeeee", /* default fg: Base 05 */
	[257] = "#282828", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
