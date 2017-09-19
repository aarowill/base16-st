// Base16 Cupertino dark - simple terminal color setup
// Defman21
static const char *colorname[] = {
	/* Normal colors */
	"#ffffff", /*  0: Base 00 - Black   */
	"#c41a15", /*  1: Base 08 - Red     */
	"#007400", /*  2: Base 0B - Green   */
	"#826b28", /*  3: Base 0A - Yellow  */
	"#0000ff", /*  4: Base 0D - Blue    */
	"#a90d91", /*  5: Base 0E - Magenta */
	"#318495", /*  6: Base 0C - Cyan    */
	"#404040", /*  7: Base 05 - White   */

	/* Bright colors */
	"#808080", /*  8: Base 03 - Bright Black */
	"#c41a15", /*  9: Base 08 - Red          */
	"#007400", /* 10: Base 0B - Green        */
	"#826b28", /* 11: Base 0A - Yellow       */
	"#0000ff", /* 12: Base 0D - Blue         */
	"#a90d91", /* 13: Base 0E - Magenta      */
	"#318495", /* 14: Base 0C - Cyan         */
	"#5e5e5e", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#eb8500", /* 16: Base 09 */
	"#826b28", /* 17: Base 0F */
	"#c0c0c0", /* 18: Base 01 */
	"#c0c0c0", /* 19: Base 02 */
	"#808080", /* 20: Base 04 */
	"#404040", /* 21: Base 06 */

	[255] = 0,

	[256] = "#404040", /* default fg: Base 05 */
	[257] = "#ffffff", /* default bg: Base 00 */
};

// Foreground, background and cursor
static unsigned int defaultfg = 256;
static unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
