// Base16 Windows NT dark - simple terminal color setup
// Fergus Collins (https://github.com/C-Fergus)
static const char *colorname[] = {
	/* Normal colors */
	"#000000", /*  0: Base 00 - Black   */
	"#ff0000", /*  1: Base 08 - Red     */
	"#00ff00", /*  2: Base 0B - Green   */
	"#ffff00", /*  3: Base 0A - Yellow  */
	"#0000ff", /*  4: Base 0D - Blue    */
	"#ff00ff", /*  5: Base 0E - Magenta */
	"#00ffff", /*  6: Base 0C - Cyan    */
	"#c0c0c0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#808080", /*  8: Base 03 - Bright Black */
	"#ff0000", /*  9: Base 08 - Red          */
	"#00ff00", /* 10: Base 0B - Green        */
	"#ffff00", /* 11: Base 0A - Yellow       */
	"#0000ff", /* 12: Base 0D - Blue         */
	"#ff00ff", /* 13: Base 0E - Magenta      */
	"#00ffff", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#808000", /* 16: Base 09 */
	"#008000", /* 17: Base 0F */
	"#2a2a2a", /* 18: Base 01 */
	"#555555", /* 19: Base 02 */
	"#a1a1a1", /* 20: Base 04 */
	"#e0e0e0", /* 21: Base 06 */

	[255] = 0,

	[256] = "#c0c0c0", /* default fg: Base 05 */
	[257] = "#000000", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
