// Base16 Classic Light dark - simple terminal color setup
// Jason Heeris (http://heeris.id.au)
static const char *colorname[] = {
	/* Normal colors */
	"#f5f5f5", /*  0: Base 00 - Black   */
	"#ac4142", /*  1: Base 08 - Red     */
	"#90a959", /*  2: Base 0B - Green   */
	"#f4bf75", /*  3: Base 0A - Yellow  */
	"#6a9fb5", /*  4: Base 0D - Blue    */
	"#aa759f", /*  5: Base 0E - Magenta */
	"#75b5aa", /*  6: Base 0C - Cyan    */
	"#303030", /*  7: Base 05 - White   */

	/* Bright colors */
	"#b0b0b0", /*  8: Base 03 - Bright Black */
	"#d28445", /* 16: Base 09 */
	"#e0e0e0", /* 18: Base 01 */
	"#d0d0d0", /* 19: Base 02 */
	"#505050", /* 20: Base 04 */
	"#202020", /* 21: Base 06 */
	"#8f5536", /* 17: Base 0F */
	"#151515", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#303030", /* default fg: Base 05 */
	[257] = "#f5f5f5", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
