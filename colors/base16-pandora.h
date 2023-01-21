// Base16 pandora dark - simple terminal color setup
// Cassandra Fox
static const char *colorname[] = {
	/* Normal colors */
	"#131213", /*  0: Base 00 - Black   */
	"#b00b69", /*  1: Base 08 - Red     */
	"#9ddf69", /*  2: Base 0B - Green   */
	"#ffcc00", /*  3: Base 0A - Yellow  */
	"#008080", /*  4: Base 0D - Blue    */
	"#a24030", /*  5: Base 0E - Magenta */
	"#714ca6", /*  6: Base 0C - Cyan    */
	"#f15c99", /*  7: Base 05 - White   */

	/* Bright colors */
	"#ffbee3", /*  8: Base 03 - Bright Black */
	"#ff9153", /* 16: Base 09 */
	"#2f1823", /* 18: Base 01 */
	"#472234", /* 19: Base 02 */
	"#9b2a46", /* 20: Base 04 */
	"#81506a", /* 21: Base 06 */
	"#a24030", /* 17: Base 0F */
	"#632227", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#f15c99", /* default fg: Base 05 */
	[257] = "#131213", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
