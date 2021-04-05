// Base16 Kimber dark - simple terminal color setup
// Mishka Nguyen (https://github.com/akhsiM)
static const char *colorname[] = {
	/* Normal colors */
	"#222222", /*  0: Base 00 - Black   */
	"#c88c8c", /*  1: Base 08 - Red     */
	"#99c899", /*  2: Base 0B - Green   */
	"#d8b56d", /*  3: Base 0A - Yellow  */
	"#537c9c", /*  4: Base 0D - Blue    */
	"#86cacd", /*  5: Base 0E - Magenta */
	"#78b4b4", /*  6: Base 0C - Cyan    */
	"#dedee7", /*  7: Base 05 - White   */

	/* Bright colors */
	"#644646", /*  8: Base 03 - Bright Black */
	"#476c88", /* 16: Base 09 */
	"#313131", /* 18: Base 01 */
	"#555d55", /* 19: Base 02 */
	"#5a5a5a", /* 20: Base 04 */
	"#c3c3b4", /* 21: Base 06 */
	"#704f4f", /* 17: Base 0F */
	"#ffffe6", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#dedee7", /* default fg: Base 05 */
	[257] = "#222222", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
