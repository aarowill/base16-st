// Base16 Espresso dark - simple terminal color setup
// Alex Mirrington (https://github.com/alexmirrington)
static const char *colorname[] = {
	/* Normal colors */
	"#2d2d2d", /*  0: Base 00 - Black   */
	"#d25252", /*  1: Base 08 - Red     */
	"#a5c261", /*  2: Base 0B - Green   */
	"#ffc66d", /*  3: Base 0A - Yellow  */
	"#6c99bb", /*  4: Base 0D - Blue    */
	"#d197d9", /*  5: Base 0E - Magenta */
	"#bed6ff", /*  6: Base 0C - Cyan    */
	"#cccccc", /*  7: Base 05 - White   */

	/* Bright colors */
	"#777777", /*  8: Base 03 - Bright Black */
	"#d25252", /*  9: Base 08 - Red          */
	"#a5c261", /* 10: Base 0B - Green        */
	"#ffc66d", /* 11: Base 0A - Yellow       */
	"#6c99bb", /* 12: Base 0D - Blue         */
	"#d197d9", /* 13: Base 0E - Magenta      */
	"#bed6ff", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f9a959", /* 16: Base 09 */
	"#f97394", /* 17: Base 0F */
	"#393939", /* 18: Base 01 */
	"#515151", /* 19: Base 02 */
	"#b4b7b4", /* 20: Base 04 */
	"#e0e0e0", /* 21: Base 06 */

	[255] = 0,

	[256] = "#cccccc", /* default fg: Base 05 */
	[257] = "#2d2d2d", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
