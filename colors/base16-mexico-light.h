// Base16 Mexico Light dark - simple terminal color setup
// Sheldon Johnson
static const char *colorname[] = {
	/* Normal colors */
	"#f8f8f8", /*  0: Base 00 - Black   */
	"#ab4642", /*  1: Base 08 - Red     */
	"#538947", /*  2: Base 0B - Green   */
	"#f79a0e", /*  3: Base 0A - Yellow  */
	"#7cafc2", /*  4: Base 0D - Blue    */
	"#96609e", /*  5: Base 0E - Magenta */
	"#4b8093", /*  6: Base 0C - Cyan    */
	"#383838", /*  7: Base 05 - White   */

	/* Bright colors */
	"#b8b8b8", /*  8: Base 03 - Bright Black */
	"#dc9656", /* 16: Base 09 */
	"#e8e8e8", /* 18: Base 01 */
	"#d8d8d8", /* 19: Base 02 */
	"#585858", /* 20: Base 04 */
	"#282828", /* 21: Base 06 */
	"#a16946", /* 17: Base 0F */
	"#181818", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#383838", /* default fg: Base 05 */
	[257] = "#f8f8f8", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
