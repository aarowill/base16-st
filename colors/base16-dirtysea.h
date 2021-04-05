// Base16 dirtysea dark - simple terminal color setup
// Kahlil (Kal) Hodgson
static const char *colorname[] = {
	/* Normal colors */
	"#e0e0e0", /*  0: Base 00 - Black   */
	"#840000", /*  1: Base 08 - Red     */
	"#730073", /*  2: Base 0B - Green   */
	"#755b00", /*  3: Base 0A - Yellow  */
	"#007300", /*  4: Base 0D - Blue    */
	"#000090", /*  5: Base 0E - Magenta */
	"#755b00", /*  6: Base 0C - Cyan    */
	"#000000", /*  7: Base 05 - White   */

	/* Bright colors */
	"#707070", /*  8: Base 03 - Bright Black */
	"#006565", /* 16: Base 09 */
	"#d0dad0", /* 18: Base 01 */
	"#d0d0d0", /* 19: Base 02 */
	"#202020", /* 20: Base 04 */
	"#f8f8f8", /* 21: Base 06 */
	"#755b00", /* 17: Base 0F */
	"#c4d9c4", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#000000", /* default fg: Base 05 */
	[257] = "#e0e0e0", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
