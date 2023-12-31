// Base16 tarot dark - simple terminal color setup
// ed (https://codeberg.org/ed)
static const char *colorname[] = {
	/* Normal colors */
	"#0e091d", /*  0: Base 00 - Black   */
	"#c53253", /*  1: Base 08 - Red     */
	"#a68e5a", /*  2: Base 0B - Green   */
	"#ff6565", /*  3: Base 0A - Yellow  */
	"#6e6080", /*  4: Base 0D - Blue    */
	"#a45782", /*  5: Base 0E - Magenta */
	"#8c9785", /*  6: Base 0C - Cyan    */
	"#aa556f", /*  7: Base 05 - White   */

	/* Bright colors */
	"#74316b", /*  8: Base 03 - Bright Black */
	"#c53253", /*  9: Base 08 - Red          */
	"#a68e5a", /* 10: Base 0B - Green        */
	"#ff6565", /* 11: Base 0A - Yellow       */
	"#6e6080", /* 12: Base 0D - Blue         */
	"#a45782", /* 13: Base 0E - Magenta      */
	"#8c9785", /* 14: Base 0C - Cyan         */
	"#dc8f7c", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ea4d60", /* 16: Base 09 */
	"#984d51", /* 17: Base 0F */
	"#2a153c", /* 18: Base 01 */
	"#4b2054", /* 19: Base 02 */
	"#8c406f", /* 20: Base 04 */
	"#c4686d", /* 21: Base 06 */

	[255] = 0,

	[256] = "#aa556f", /* default fg: Base 05 */
	[257] = "#0e091d", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
