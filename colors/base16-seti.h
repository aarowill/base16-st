// Base16 Seti UI dark - simple terminal color setup
// 
static const char *colorname[] = {
	/* Normal colors */
	"#151718", /*  0: Base 00 - Black   */
	"#cd3f45", /*  1: Base 08 - Red     */
	"#9fca56", /*  2: Base 0B - Green   */
	"#e6cd69", /*  3: Base 0A - Yellow  */
	"#55b5db", /*  4: Base 0D - Blue    */
	"#a074c4", /*  5: Base 0E - Magenta */
	"#55dbbe", /*  6: Base 0C - Cyan    */
	"#d6d6d6", /*  7: Base 05 - White   */

	/* Bright colors */
	"#41535b", /*  8: Base 03 - Bright Black */
	"#db7b55", /* 16: Base 09 */
	"#282a2b", /* 18: Base 01 */
	"#3b758c", /* 19: Base 02 */
	"#43a5d5", /* 20: Base 04 */
	"#eeeeee", /* 21: Base 06 */
	"#8a553f", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#d6d6d6", /* default fg: Base 05 */
	[257] = "#151718", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
