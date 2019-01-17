// Base16 PaperColor Light dark - simple terminal color setup
// Jon Leopard (http://github.com/jonleopard) based on PaperColor Theme (https://github.com/NLKNguyen/papercolor-theme)
static const char *colorname[] = {
	/* Normal colors */
	"#eeeeee", /*  0: Base 00 - Black   */
	"#bcbcbc", /*  1: Base 08 - Red     */
	"#8700af", /*  2: Base 0B - Green   */
	"#d70087", /*  3: Base 0A - Yellow  */
	"#d75f00", /*  4: Base 0D - Blue    */
	"#005faf", /*  5: Base 0E - Magenta */
	"#d75f00", /*  6: Base 0C - Cyan    */
	"#878787", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5f8700", /*  8: Base 03 - Bright Black */
	"#bcbcbc", /*  9: Base 08 - Red          */
	"#8700af", /* 10: Base 0B - Green        */
	"#d70087", /* 11: Base 0A - Yellow       */
	"#d75f00", /* 12: Base 0D - Blue         */
	"#005faf", /* 13: Base 0E - Magenta      */
	"#d75f00", /* 14: Base 0C - Cyan         */
	"#444444", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d70000", /* 16: Base 09 */
	"#005f87", /* 17: Base 0F */
	"#af0000", /* 18: Base 01 */
	"#008700", /* 19: Base 02 */
	"#0087af", /* 20: Base 04 */
	"#005f87", /* 21: Base 06 */

	[255] = 0,

	[256] = "#878787", /* default fg: Base 05 */
	[257] = "#eeeeee", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
