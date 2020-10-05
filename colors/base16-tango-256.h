// Base16 Tango dark - simple terminal color setup
// @Schnouki, based on the Tango Desktop Project
static const char *colorname[] = {
	/* Normal colors */
	"#2e3436", /*  0: Base 00 - Black   */
	"#cc0000", /*  1: Base 08 - Red     */
	"#4e9a06", /*  2: Base 0B - Green   */
	"#c4a000", /*  3: Base 0A - Yellow  */
	"#3465a4", /*  4: Base 0D - Blue    */
	"#75507b", /*  5: Base 0E - Magenta */
	"#06989a", /*  6: Base 0C - Cyan    */
	"#d3d7cf", /*  7: Base 05 - White   */

	/* Bright colors */
	"#555753", /*  8: Base 03 - Bright Black */
	"#cc0000", /*  9: Base 08 - Red          */
	"#4e9a06", /* 10: Base 0B - Green        */
	"#c4a000", /* 11: Base 0A - Yellow       */
	"#3465a4", /* 12: Base 0D - Blue         */
	"#75507b", /* 13: Base 0E - Magenta      */
	"#06989a", /* 14: Base 0C - Cyan         */
	"#eeeeec", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ef2929", /* 16: Base 09 */
	"#34e2e2", /* 17: Base 0F */
	"#8ae234", /* 18: Base 01 */
	"#fce94f", /* 19: Base 02 */
	"#729fcf", /* 20: Base 04 */
	"#ad7fa8", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d3d7cf", /* default fg: Base 05 */
	[257] = "#2e3436", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
