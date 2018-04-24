// Base16 Solar Flare dark - simple terminal color setup
// Chuck Harmston (https://chuck.harmston.ch)
static const char *colorname[] = {
	/* Normal colors */
	"#18262f", /*  0: Base 00 - Black   */
	"#ef5253", /*  1: Base 08 - Red     */
	"#7cc844", /*  2: Base 0B - Green   */
	"#e4b51c", /*  3: Base 0A - Yellow  */
	"#33b5e1", /*  4: Base 0D - Blue    */
	"#a363d5", /*  5: Base 0E - Magenta */
	"#52cbb0", /*  6: Base 0C - Cyan    */
	"#a6afb8", /*  7: Base 05 - White   */

	/* Bright colors */
	"#667581", /*  8: Base 03 - Bright Black */
	"#ef5253", /*  9: Base 08 - Red          */
	"#7cc844", /* 10: Base 0B - Green        */
	"#e4b51c", /* 11: Base 0A - Yellow       */
	"#33b5e1", /* 12: Base 0D - Blue         */
	"#a363d5", /* 13: Base 0E - Magenta      */
	"#52cbb0", /* 14: Base 0C - Cyan         */
	"#f5f7fa", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#e66b2b", /* 16: Base 09 */
	"#d73c9a", /* 17: Base 0F */
	"#222e38", /* 18: Base 01 */
	"#586875", /* 19: Base 02 */
	"#85939e", /* 20: Base 04 */
	"#e8e9ed", /* 21: Base 06 */

	[255] = 0,

	[256] = "#a6afb8", /* default fg: Base 05 */
	[257] = "#18262f", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
