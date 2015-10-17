/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertItem.h"

@class NSString;

@interface SBCallFailureAlertItem : SBAlertItem {
	int _causeCode;
	NSString* _address;
	CTCallRef _call;
}
-(instancetype)initWithCauseCode:(long)causeCode call:(CTCallRef)call;
// inherited: -(void)dealloc;
-(void)_callback;
// inherited: -(id)lockLabel;
// inherited: -(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
// inherited: -(void)performUnlockAction;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(BOOL)isCallFailureAlertItem;
@end

