// Base16 Tomorrow Night dark - simple terminal color setup
// Chris Kempson (http://chriskempson.com)
static const char *colorname[] = {
	/* Normal colors */
	"#1d1f21", /*  0: Base 00 - Black   */
	"#cc6666", /*  1: Base 08 - Red     */
	"#b5bd68", /*  2: Base 0B - Green   */
	"#f0c674", /*  3: Base 0A - Yellow  */
	"#81a2be", /*  4: Base 0D - Blue    */
	"#b294bb", /*  5: Base 0E - Magenta */
	"#8abeb7", /*  6: Base 0C - Cyan    */
	"#c5c8c6", /*  7: Base 05 - White   */

	/* Bright colors */
	"#969896", /*  8: Base 03 - Bright Black */
	"#de935f", /* 16: Base 09 */
	"#282a2e", /* 18: Base 01 */
	"#373b41", /* 19: Base 02 */
	"#b4b7b4", /* 20: Base 04 */
	"#e0e0e0", /* 21: Base 06 */
	"#a3685a", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#c5c8c6", /* default fg: Base 05 */
	[257] = "#1d1f21", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
