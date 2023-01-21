// Base16 Zenbones dark - simple terminal color setup
// mcchrish
static const char *colorname[] = {
	/* Normal colors */
	"#191919", /*  0: Base 00 - Black   */
	"#3d3839", /*  1: Base 08 - Red     */
	"#d68c67", /*  2: Base 0B - Green   */
	"#8bae68", /*  3: Base 0A - Yellow  */
	"#cf86c1", /*  4: Base 0D - Blue    */
	"#65b8c1", /*  5: Base 0E - Magenta */
	"#61abda", /*  6: Base 0C - Cyan    */
	"#b279a7", /*  7: Base 05 - White   */

	/* Bright colors */
	"#b77e64", /*  8: Base 03 - Bright Black */
	"#e8838f", /* 16: Base 09 */
	"#de6e7c", /* 18: Base 01 */
	"#819b69", /* 19: Base 02 */
	"#6099c0", /* 20: Base 04 */
	"#66a5ad", /* 21: Base 06 */
	"#8e8e8e", /* 17: Base 0F */
	"#bbbbbb", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#b279a7", /* default fg: Base 05 */
	[257] = "#191919", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
