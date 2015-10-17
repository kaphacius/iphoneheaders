/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIWindow.h>
#import <Availability2.h>

@class NSMutableDictionary, NSMutableArray, SBAlertDisplay, UIView;

@interface SBAlertWindow : UIWindow {
	UIView* _contentLayer;
	unsigned _isAnimating : 1;
	unsigned _isInvalid : 1;
	unsigned _handlerActive : 1;
	float _finalAlpha;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	int _currentOrientation;
#endif
	SBAlertDisplay* _currentDisplay;
	NSMutableArray* _stackedAlertDisplays;
	NSMutableDictionary* _alertToDisplayMap;
}
// inherited: +(CGRect)constrainFrameToScreen:(CGRect)screen;
// inherited: -(instancetype)initWithContentRect:(CGRect)contentRect;
// inherited: -(void)dealloc;
-(BOOL)isOpaque;
-(id)stackedDisplayForAlert:(id)alert;
-(void)displayAlert:(id)alert;
-(BOOL)deactivateAlert:(id)alert;
-(int)displayCount;
-(void)dismissWindow:(id)window;
-(void)alertDisplayWillDismiss;
-(void)popInCurrentDisplay;
-(id)currentDisplay;
-(void)setHandlerAlreadyActive:(BOOL)active;
-(BOOL)handlerAlreadyActive;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(id)contentLayer;
-(void)_setupContentLayerForCurrentOrientation;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)rotatingContentViewForWindow:(id)window;
-(void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)noteInterfaceOrientationChangingTo:(int)to animated:(BOOL)animated;
#endif
@end

