// Base16 Windows NT Light dark - simple terminal color setup
// Fergus Collins (https://github.com/C-Fergus)
static const char *colorname[] = {
	/* Normal colors */
	"#ffffff", /*  0: Base 00 - Black   */
	"#800000", /*  1: Base 08 - Red     */
	"#008000", /*  2: Base 0B - Green   */
	"#808000", /*  3: Base 0A - Yellow  */
	"#000080", /*  4: Base 0D - Blue    */
	"#800080", /*  5: Base 0E - Magenta */
	"#008080", /*  6: Base 0C - Cyan    */
	"#808080", /*  7: Base 05 - White   */

	/* Bright colors */
	"#c0c0c0", /*  8: Base 03 - Bright Black */
	"#800000", /*  9: Base 08 - Red          */
	"#008000", /* 10: Base 0B - Green        */
	"#808000", /* 11: Base 0A - Yellow       */
	"#000080", /* 12: Base 0D - Blue         */
	"#800080", /* 13: Base 0E - Magenta      */
	"#008080", /* 14: Base 0C - Cyan         */
	"#000000", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ffff00", /* 16: Base 09 */
	"#00ff00", /* 17: Base 0F */
	"#eaeaea", /* 18: Base 01 */
	"#d5d5d5", /* 19: Base 02 */
	"#a0a0a0", /* 20: Base 04 */
	"#404040", /* 21: Base 06 */

	[255] = 0,

	[256] = "#808080", /* default fg: Base 05 */
	[257] = "#ffffff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
