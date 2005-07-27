/* AbiWord
 * Copyright (C) 2003 Hubert Figuiere
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  
 * 02111-1307, USA.
 */

#include "ut_assert.h"
#include "ut_debugmsg.h"

#include "xap_PrintingDelegate.h"
#import "xap_PrintingNSView.h"


@implementation XAP_PrintingNSView

- (void)dealloc
{
	DELETEP(_printingDelegate);
	[super dealloc];
}

- (void)setPrintingDelegate:(XAP_PrintingDelegate*)delegate;
{
	DELETEP(_printingDelegate);
	_printingDelegate = delegate;
}


- (BOOL)knowsPageRange:(NSRangePointer)range 
{
	UT_ASSERT(_printingDelegate);
	
	range->length = _printingDelegate->getPageCount();
	range->location = 1;

	return YES;
}

- (NSRect)rectForPage:(int)page
{
	return [self bounds];
}

- (void)drawRect:(NSRect)rect 
{
    // Drawing code here.
	if ([NSGraphicsContext currentContextDrawingToScreen]) {
		UT_ASSERT_NOT_REACHED();		
	}
	else {
		_printingDelegate->printPage([[NSPrintOperation currentOperation] currentPage]);
	}
}

@end


