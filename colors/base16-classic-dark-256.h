// Base16 Classic Dark dark - simple terminal color setup
// Jason Heeris (http://heeris.id.au)
static const char *colorname[] = {
	/* Normal colors */
	"#151515", /*  0: Base 00 - Black   */
	"#ac4142", /*  1: Base 08 - Red     */
	"#90a959", /*  2: Base 0B - Green   */
	"#f4bf75", /*  3: Base 0A - Yellow  */
	"#6a9fb5", /*  4: Base 0D - Blue    */
	"#aa759f", /*  5: Base 0E - Magenta */
	"#75b5aa", /*  6: Base 0C - Cyan    */
	"#d0d0d0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#505050", /*  8: Base 03 - Bright Black */
	"#ac4142", /*  9: Base 08 - Red          */
	"#90a959", /* 10: Base 0B - Green        */
	"#f4bf75", /* 11: Base 0A - Yellow       */
	"#6a9fb5", /* 12: Base 0D - Blue         */
	"#aa759f", /* 13: Base 0E - Magenta      */
	"#75b5aa", /* 14: Base 0C - Cyan         */
	"#f5f5f5", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d28445", /* 16: Base 09 */
	"#8f5536", /* 17: Base 0F */
	"#202020", /* 18: Base 01 */
	"#303030", /* 19: Base 02 */
	"#b0b0b0", /* 20: Base 04 */
	"#e0e0e0", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d0d0d0", /* default fg: Base 05 */
	[257] = "#151515", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
