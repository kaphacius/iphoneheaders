/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "CKTextContentView.h"
#import "ChatKit-Structs.h"
#import "DOMEventListener.h"


@interface CKRichContentView : CKTextContentView <DOMEventListener> {
	id _richContentDelegate;
}
@property(assign, nonatomic) id richContentDelegate;
-(instancetype)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)brElement;
-(void)insertImage:(id)image ID:(id)id URL:(id)url;
-(id)nodeForImage:(id)image ID:(id)id URL:(id)url;
-(id)createDocumentFragment;
-(void)_wvHelperThawSelectionTag;
-(void)_wvInsertHTML:(id)html;
-(void)_wvRegisterForDOMEvents;
-(void)_wvUnregisterForDOMEvents;
-(void)handleEvent:(id)event;
-(void)setHTML:(id)html;
-(void)insertHTML:(id)html;
@end

