/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSNumber, ASEvent, NSDate;

@interface ASRecurrence : ASItem <NSCoding> {
	NSNumber* _type;
	NSNumber* _interval;
	NSNumber* _dayOfWeek;
	NSNumber* _dayOfMonth;
	NSNumber* _weekOfMonth;
	NSNumber* _monthOfYear;
	NSDate* _until;
	NSNumber* _occurrences;
	ASEvent* _parentEvent;
}
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
-(void)setParentEvent:(id)event;
-(id)_untilDateForCalFramework;
-(id)_transformedUntilDateForActiveSync:(id)activeSync;
// inherited: -(id)asParseRules;
-(BOOL)_requiresParentEvent;
// inherited: -(void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;
-(void*)_newRecurrence;
-(void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void*)record treatNullsAsDeletes:(BOOL)deletes;
-(BOOL)_loadAttributesFromCalRecurrence:(void*)calRecurrence parentStartDate:(id)date parentItem:(id)item;
-(instancetype)initWithCalRecurrence:(void*)calRecurrence parentEvent:(id)event;
-(void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;
-(void)setUntilString:(id)string;
// inherited: -(void)dealloc;
// in a protocol: -(instancetype)initWithCoder:(id)coder;
// in a protocol: -(void)encodeWithCoder:(id)coder;
-(id)type;
-(void)setType:(id)type;
-(id)interval;
-(void)setInterval:(id)interval;
-(id)dayOfWeek;
-(void)setDayOfWeek:(id)week;
-(id)dayOfMonth;
-(void)setDayOfMonth:(id)month;
-(id)weekOfMonth;
-(void)setWeekOfMonth:(id)month;
-(id)monthOfYear;
-(void)setMonthOfYear:(id)year;
-(id)until;
-(void)setUntil:(id)until;
-(id)occurrences;
-(void)setOccurrences:(id)occurrences;
@end

