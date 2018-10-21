// Base16 Snazzy dark - simple terminal color setup
// Chawye Hsu (https://github.com/h404bi) based on Hyper Snazzy Theme (https://github.com/sindresorhus/hyper-snazzy)
static const char *colorname[] = {
	/* Normal colors */
	"#282a36", /*  0: Base 00 - Black   */
	"#ff5c57", /*  1: Base 08 - Red     */
	"#5af78e", /*  2: Base 0B - Green   */
	"#f3f99d", /*  3: Base 0A - Yellow  */
	"#57c7ff", /*  4: Base 0D - Blue    */
	"#ff6ac1", /*  5: Base 0E - Magenta */
	"#9aedfe", /*  6: Base 0C - Cyan    */
	"#e2e4e5", /*  7: Base 05 - White   */

	/* Bright colors */
	"#78787e", /*  8: Base 03 - Bright Black */
	"#ff5c57", /*  9: Base 08 - Red          */
	"#5af78e", /* 10: Base 0B - Green        */
	"#f3f99d", /* 11: Base 0A - Yellow       */
	"#57c7ff", /* 12: Base 0D - Blue         */
	"#ff6ac1", /* 13: Base 0E - Magenta      */
	"#9aedfe", /* 14: Base 0C - Cyan         */
	"#f1f1f0", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ff9f43", /* 16: Base 09 */
	"#b2643c", /* 17: Base 0F */
	"#34353e", /* 18: Base 01 */
	"#43454f", /* 19: Base 02 */
	"#a5a5a9", /* 20: Base 04 */
	"#eff0eb", /* 21: Base 06 */

	[255] = 0,

	[256] = "#e2e4e5", /* default fg: Base 05 */
	[257] = "#282a36", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
