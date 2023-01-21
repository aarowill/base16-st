// Base16 Tokyo City Dark dark - simple terminal color setup
// Michaël Ball
static const char *colorname[] = {
	/* Normal colors */
	"#171d23", /*  0: Base 00 - Black   */
	"#f7768e", /*  1: Base 08 - Red     */
	"#9ece6a", /*  2: Base 0B - Green   */
	"#b7c5d3", /*  3: Base 0A - Yellow  */
	"#7aa2f7", /*  4: Base 0D - Blue    */
	"#bb9af7", /*  5: Base 0E - Magenta */
	"#89ddff", /*  6: Base 0C - Cyan    */
	"#d8e2ec", /*  7: Base 05 - White   */

	/* Bright colors */
	"#526270", /*  8: Base 03 - Bright Black */
	"#f7768e", /*  9: Base 08 - Red          */
	"#9ece6a", /* 10: Base 0B - Green        */
	"#b7c5d3", /* 11: Base 0A - Yellow       */
	"#7aa2f7", /* 12: Base 0D - Blue         */
	"#bb9af7", /* 13: Base 0E - Magenta      */
	"#89ddff", /* 14: Base 0C - Cyan         */
	"#fbfbfd", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff9e64", /* 16: Base 09 */
	"#bb9af7", /* 17: Base 0F */
	"#1d252c", /* 18: Base 01 */
	"#28323a", /* 19: Base 02 */
	"#b7c5d3", /* 20: Base 04 */
	"#f6f6f8", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d8e2ec", /* default fg: Base 05 */
	[257] = "#171d23", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
