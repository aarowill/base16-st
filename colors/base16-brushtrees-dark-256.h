// Base16 Brush Trees Dark dark - simple terminal color setup
// Abraham White &lt;abelincoln.white@gmail.com&gt;
static const char *colorname[] = {
	/* Normal colors */
	"#485867", /*  0: Base 00 - Black   */
	"#b38686", /*  1: Base 08 - Red     */
	"#87b386", /*  2: Base 0B - Green   */
	"#aab386", /*  3: Base 0A - Yellow  */
	"#868cb3", /*  4: Base 0D - Blue    */
	"#b386b2", /*  5: Base 0E - Magenta */
	"#86b3b3", /*  6: Base 0C - Cyan    */
	"#b0c5c8", /*  7: Base 05 - White   */

	/* Bright colors */
	"#8299a1", /*  8: Base 03 - Bright Black */
	"#b38686", /*  9: Base 08 - Red          */
	"#87b386", /* 10: Base 0B - Green        */
	"#aab386", /* 11: Base 0A - Yellow       */
	"#868cb3", /* 12: Base 0D - Blue         */
	"#b386b2", /* 13: Base 0E - Magenta      */
	"#86b3b3", /* 14: Base 0C - Cyan         */
	"#e3efef", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d8bba2", /* 16: Base 09 */
	"#b39f9f", /* 17: Base 0F */
	"#5a6d7a", /* 18: Base 01 */
	"#6d828e", /* 19: Base 02 */
	"#98afb5", /* 20: Base 04 */
	"#c9dbdc", /* 21: Base 06 */

	[255] = 0,

	[256] = "#b0c5c8", /* default fg: Base 05 */
	[257] = "#485867", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
