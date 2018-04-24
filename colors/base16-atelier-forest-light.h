// Base16 Atelier Forest Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#f1efee", /*  0: Base 00 - Black   */
	"#f22c40", /*  1: Base 08 - Red     */
	"#7b9726", /*  2: Base 0B - Green   */
	"#c38418", /*  3: Base 0A - Yellow  */
	"#407ee7", /*  4: Base 0D - Blue    */
	"#6666ea", /*  5: Base 0E - Magenta */
	"#3d97b8", /*  6: Base 0C - Cyan    */
	"#68615e", /*  7: Base 05 - White   */

	/* Bright colors */
	"#9c9491", /*  8: Base 03 - Bright Black */
	"#df5320", /* 16: Base 09 */
	"#e6e2e0", /* 18: Base 01 */
	"#a8a19f", /* 19: Base 02 */
	"#766e6b", /* 20: Base 04 */
	"#2c2421", /* 21: Base 06 */
	"#c33ff3", /* 17: Base 0F */
	"#1b1918", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#68615e", /* default fg: Base 05 */
	[257] = "#f1efee", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
