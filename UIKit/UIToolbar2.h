/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>
#import <UIKit/UIToolbar.h>
#import <Availability2.h>

@class NSArray, UIBarButtonItem, UIColor;

@interface UIToolbar ()
-(instancetype)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)_updateOpacity;
-(void)setMode:(int)mode;
-(int)mode;
#ifndef __IPHONE_7_0
-(void)setDelegate:(id)delegate;
-(id)delegate;
#endif
-(void)setSelectedItem:(id)item;
-(id)selectedItem;
-(void)_sendAction:(id)action withEvent:(id)event;
-(void)_didFinishHidingRetainedOldItems:(id)items;
-(void)_finishSetItems:(id)items finished:(id)finished context:(void*)context;
-(CGSize)defaultSizeForOrientation:(int)orientation;
-(CGSize)sizeThatFits:(CGSize)fits;
-(BOOL)isMinibar;
-(void)setBounds:(CGRect)bounds;
-(void)layoutSubviews;
-(void)beginCustomizingItems:(id)items;
-(BOOL)endCustomizingAnimated:(BOOL)animated;
-(BOOL)isCustomizing;
-(void)animateToolbarItemIndex:(unsigned)index duration:(double)duration target:(id)target didFinishSelector:(SEL)selector;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)setExtraEdgeInsets:(float)insets;
-(float)extraEdgeInsets;
-(void)setBarStyle:(int)style force:(BOOL)force;
#endif
@end

@interface UIToolbar (SynthEvents)
-(BOOL)_isHidden:(id)hidden;
-(id)_buttonName:(id)name withType:(int)type;
-(void)_updateScriptingInfo:(id)info view:(id)view;
-(id)scriptingInfoWithChildren;
@end

@interface UIToolbar (Static)
-(id)_descriptionForTag:(int)tag;
-(void)_buttonDown:(id)down;
-(void)_buttonDownDelayed:(id)delayed;
-(void)_buttonUp:(id)up;
-(void)_buttonCancel:(id)cancel;
-(void)_adjustButtonSelection:(id)selection;
-(id)_buttonWithDescription:(id)description;
-(void)_customizeWithCurrentButtons:(id)currentButtons availableButton:(id)button;
-(void)_dismissCustomizeSheet:(BOOL)sheet;
-(void)_customizeDoneButtonAction:(id)action;
-(void)_finishCustomizeAnimation:(id)animation;
-(void)_showButtons:(int*)buttons withCount:(int)count group:(int)group withDuration:(double)duration adjustPositions:(BOOL)positions skipTag:(int)tag;
-(id)_currentButtons;
-(id)_configureFromOldButton:(id)oldButton toNewButtonWithTag:(int)tag skipTag:(int)tag3;
-(void)_finishButtonAnimation:(int)animation forButton:(int)button;
-(void)_customizeWithAvailableItems:(id)availableItems;
-(void)_configureToolbarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;
-(void)_updateItemsForNewFrame:(id)newFrame;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(float)_edgeMarginForBorderedItem:(BOOL)borderedItem;
#endif
@end

@interface UIToolbar (UIButtonBarInternal)
+(float)_buttonGap;
-(void)_alertWillShow:(BOOL)_alert duration:(float)duration;
-(void)_alertDidHide;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(id)_positionToolbarButtons:(id)buttons ignoringItem:(id)item actuallyRepositionButtons:(BOOL)buttons3;
#endif
-(void)_positionToolbarButtons:(id)buttons ignoringItem:(id)item;
@end

@interface UIToolbar (UIButtonBarButtonItem)
-(instancetype)initInView:(id)view withFrame:(CGRect)frame withItems:(XXStruct_b4LybD*)items withCount:(int)count;
-(instancetype)initInView:(id)view withItems:(XXStruct_b4LybD*)items withCount:(int)count;
@end

@interface UIToolbar (UIButtonBarPrivate)
+(Class)defaultButtonClass;
+(Class)defaultTextButtonClass;
+(id)defaultButtonFont;
+(float)defaultHeight;
+(float)defaultSelectionModeHeight;
+(float)defaultHeightForBarSize:(int)barSize;
-(instancetype)initInView:(id)view withFrame:(CGRect)frame withItemList:(id)itemList;
-(instancetype)initInView:(id)view withItemList:(id)itemList;
-(id)createButtonWithDescription:(id)description;
-(void)positionButtons:(id)buttons tags:(int*)tags count:(int)count group:(int)group;
-(void)_buttonBarFinishedAnimating;
-(void)showButtons:(int*)buttons withCount:(int)count withDuration:(double)duration;
-(void)registerButtonGroup:(int)group withButtons:(int*)buttons withCount:(int)count;
-(void)showButtonGroup:(int)group withDuration:(double)duration;
-(int)currentButtonGroup;
-(void)getVisibleButtonTags:(int*)tags count:(unsigned*)count maxItems:(unsigned)items;
-(void)setButtonBarTrackingMode:(int)mode;
-(void)customize:(const int*)customize withCount:(int)count;
-(void)dismissCustomizeSheet:(BOOL)sheet;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(int)selectedButton;
-(void)showSelectionForButton:(int)button;
-(void)setBadgeValue:(id)value forButton:(int)button;
-(void)setBadgeGlyph:(id)glyph forButton:(int)button;
-(void)setBadgeAnimated:(BOOL)animated forButton:(int)button;
-(BOOL)onStateForButton:(int)button;
-(void)setOnStateForButton:(BOOL)button forButton:(int)button2;
-(void)animateWithDuration:(float)duration forButton:(int)button;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
-(void)drawRect:(CGRect)rect;
-(id)buttonItems;
-(void)setButtonItems:(id)items;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)_setForceTopBarAppearance:(BOOL)appearance;
#else
-(void)setHasRoundedCorners:(BOOL)corners;
-(BOOL)hasRoundedCorners;
#endif
@end

@interface UIToolbar (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

