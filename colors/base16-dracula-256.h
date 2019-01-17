// Base16 Dracula dark - simple terminal color setup
// Mike Barkmin (http://github.com/mikebarkmin) based on Dracula Theme (http://github.com/dracula)
static const char *colorname[] = {
	/* Normal colors */
	"#282936", /*  0: Base 00 - Black   */
	"#ea51b2", /*  1: Base 08 - Red     */
	"#ebff87", /*  2: Base 0B - Green   */
	"#00f769", /*  3: Base 0A - Yellow  */
	"#62d6e8", /*  4: Base 0D - Blue    */
	"#b45bcf", /*  5: Base 0E - Magenta */
	"#a1efe4", /*  6: Base 0C - Cyan    */
	"#e9e9f4", /*  7: Base 05 - White   */

	/* Bright colors */
	"#626483", /*  8: Base 03 - Bright Black */
	"#ea51b2", /*  9: Base 08 - Red          */
	"#ebff87", /* 10: Base 0B - Green        */
	"#00f769", /* 11: Base 0A - Yellow       */
	"#62d6e8", /* 12: Base 0D - Blue         */
	"#b45bcf", /* 13: Base 0E - Magenta      */
	"#a1efe4", /* 14: Base 0C - Cyan         */
	"#f7f7fb", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#b45bcf", /* 16: Base 09 */
	"#00f769", /* 17: Base 0F */
	"#3a3c4e", /* 18: Base 01 */
	"#4d4f68", /* 19: Base 02 */
	"#62d6e8", /* 20: Base 04 */
	"#f1f2f8", /* 21: Base 06 */

	[255] = 0,

	[256] = "#e9e9f4", /* default fg: Base 05 */
	[257] = "#282936", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
