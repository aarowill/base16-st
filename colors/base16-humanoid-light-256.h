// Base16 Humanoid light dark - simple terminal color setup
// Thomas (tasmo) Friese
static const char *colorname[] = {
	/* Normal colors */
	"#f8f8f2", /*  0: Base 00 - Black   */
	"#b0151a", /*  1: Base 08 - Red     */
	"#388e3c", /*  2: Base 0B - Green   */
	"#ffb627", /*  3: Base 0A - Yellow  */
	"#0082c9", /*  4: Base 0D - Blue    */
	"#700f98", /*  5: Base 0E - Magenta */
	"#008e8e", /*  6: Base 0C - Cyan    */
	"#232629", /*  7: Base 05 - White   */

	/* Bright colors */
	"#c0c0bd", /*  8: Base 03 - Bright Black */
	"#b0151a", /*  9: Base 08 - Red          */
	"#388e3c", /* 10: Base 0B - Green        */
	"#ffb627", /* 11: Base 0A - Yellow       */
	"#0082c9", /* 12: Base 0D - Blue         */
	"#700f98", /* 13: Base 0E - Magenta      */
	"#008e8e", /* 14: Base 0C - Cyan         */
	"#070708", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff3d00", /* 16: Base 09 */
	"#b27701", /* 17: Base 0F */
	"#efefe9", /* 18: Base 01 */
	"#deded8", /* 19: Base 02 */
	"#60615d", /* 20: Base 04 */
	"#2f3337", /* 21: Base 06 */

	[255] = 0,

	[256] = "#232629", /* default fg: Base 05 */
	[257] = "#f8f8f2", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
