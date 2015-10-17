/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@interface UITile : UIView {
	CGRect _dirtyRect;
	BOOL _hasDrawnContent;
}
-(instancetype)initWithFrame:(CGRect)frame;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)setNeedsDisplay;
-(BOOL)_canDrawContent;
-(BOOL)willDrawContent;
-(void)drawRect:(CGRect)rect;
-(BOOL)hasDrawnContent;
-(void)setDirtyRect:(CGRect)rect;
-(void)setNeedsDisplayInDirtyRect;
-(void)invalidateContents;
@end

#endif
