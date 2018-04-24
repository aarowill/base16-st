// Base16 Atelier Seaside Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#f4fbf4", /*  0: Base 00 - Black   */
	"#e6193c", /*  1: Base 08 - Red     */
	"#29a329", /*  2: Base 0B - Green   */
	"#98981b", /*  3: Base 0A - Yellow  */
	"#3d62f5", /*  4: Base 0D - Blue    */
	"#ad2bee", /*  5: Base 0E - Magenta */
	"#1999b3", /*  6: Base 0C - Cyan    */
	"#5e6e5e", /*  7: Base 05 - White   */

	/* Bright colors */
	"#809980", /*  8: Base 03 - Bright Black */
	"#87711d", /* 16: Base 09 */
	"#cfe8cf", /* 18: Base 01 */
	"#8ca68c", /* 19: Base 02 */
	"#687d68", /* 20: Base 04 */
	"#242924", /* 21: Base 06 */
	"#e619c3", /* 17: Base 0F */
	"#131513", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#5e6e5e", /* default fg: Base 05 */
	[257] = "#f4fbf4", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
