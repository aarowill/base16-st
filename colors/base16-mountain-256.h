// Base16 Mountain dark - simple terminal color setup
// gnsfujiwara (https://github.com/gnsfujiwara)
static const char *colorname[] = {
	/* Normal colors */
	"#0f0f0f", /*  0: Base 00 - Black   */
	"#ac8a8c", /*  1: Base 08 - Red     */
	"#8aac8b", /*  2: Base 0B - Green   */
	"#aca98a", /*  3: Base 0A - Yellow  */
	"#8f8aac", /*  4: Base 0D - Blue    */
	"#ac8aac", /*  5: Base 0E - Magenta */
	"#8aabac", /*  6: Base 0C - Cyan    */
	"#cacaca", /*  7: Base 05 - White   */

	/* Bright colors */
	"#4c4c4c", /*  8: Base 03 - Bright Black */
	"#ac8a8c", /*  9: Base 08 - Red          */
	"#8aac8b", /* 10: Base 0B - Green        */
	"#aca98a", /* 11: Base 0A - Yellow       */
	"#8f8aac", /* 12: Base 0D - Blue         */
	"#ac8aac", /* 13: Base 0E - Magenta      */
	"#8aabac", /* 14: Base 0C - Cyan         */
	"#f0f0f0", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ceb188", /* 16: Base 09 */
	"#ac8a8c", /* 17: Base 0F */
	"#191919", /* 18: Base 01 */
	"#262626", /* 19: Base 02 */
	"#ac8a8c", /* 20: Base 04 */
	"#e7e7e7", /* 21: Base 06 */

	[255] = 0,

	[256] = "#cacaca", /* default fg: Base 05 */
	[257] = "#0f0f0f", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
