// Base16 Silk Light dark - simple terminal color setup
// Gabriel Fontes (https://github.com/Misterio77)
static const char *colorname[] = {
	/* Normal colors */
	"#e9f1ef", /*  0: Base 00 - Black   */
	"#cf432e", /*  1: Base 08 - Red     */
	"#6ca38c", /*  2: Base 0B - Green   */
	"#cfad25", /*  3: Base 0A - Yellow  */
	"#39aac9", /*  4: Base 0D - Blue    */
	"#6e6582", /*  5: Base 0E - Magenta */
	"#329ca2", /*  6: Base 0C - Cyan    */
	"#385156", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5c787b", /*  8: Base 03 - Bright Black */
	"#d27f46", /* 16: Base 09 */
	"#ccd4d3", /* 18: Base 01 */
	"#90b7b6", /* 19: Base 02 */
	"#4b5b5f", /* 20: Base 04 */
	"#0e3c46", /* 21: Base 06 */
	"#865369", /* 17: Base 0F */
	"#d2faff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#385156", /* default fg: Base 05 */
	[257] = "#e9f1ef", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
