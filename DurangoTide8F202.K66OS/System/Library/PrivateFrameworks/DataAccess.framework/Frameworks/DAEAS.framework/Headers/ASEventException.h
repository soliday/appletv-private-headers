/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASEvent.h"

@class NSNumber, NSMutableDictionary, NSDate;

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
	NSNumber *_isDeleted;	// 168 = 0xa8
	NSDate *_exceptionStartTime;	// 172 = 0xac
	NSMutableDictionary *_placeHolder;	// 176 = 0xb0
	ASEvent *_originalEvent;	// 180 = 0xb4
}
@property(retain) id exceptionDate;	// G=0x32f006d1; S=0x32f006bd; converted property
@property(retain) NSDate *exceptionStartTime;	// G=0x32f00621; S=0x32f005e5; converted property
@property(retain) NSNumber *isDeleted;	// G=0x32f0068d; S=0x32f00651; converted property
@property(retain) ASEvent *originalEvent;	// G=0x32f005c5; S=0x32f005d5; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x32f009e5
+ (BOOL)frontingBasicTypes;	// 0x32f0090d
+ (BOOL)notifyOfUnknownTokens;	// 0x32f008c5
+ (BOOL)parsingLeafNode;	// 0x32f0099d
+ (BOOL)parsingWithSubItems;	// 0x32f00955
- (id)initWithCalEvent:(void *)calEvent originalEvent:(id)event account:(id)account;	// 0x32f021c9
- (id)initWithCoder:(id)coder;	// 0x32f00b21
- (id)initWithExceptionStartTime:(id)exceptionStartTime;	// 0x32f00d3d
- (void)_loadAttributesFromCalEvent:(void *)calEvent withKnownExceptionDate:(id)knownExceptionDate forAccount:(id)account;	// 0x32f01ded
- (id)_transformedExceptionStartDateForActiveSync:(id)activeSync;	// 0x32f00765
- (id)_transformedExceptionStartDateForCalFramework:(id)calFramework;	// 0x32f007cd
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x32f01e81
- (void)applyPlaceHolder;	// 0x32f008a5
- (id)asParseRules;	// 0x32f00fbd
- (void)clearPlaceHolder;	// 0x32f0087d
- (void)dealloc;	// 0x32f00c31
- (BOOL)deleteFromCalendar;	// 0x32f0232d
- (id)description;	// 0x32f00c9d
- (void)encodeWithCoder:(id)coder;	// 0x32f00a2d
// converted property getter: - (id)exceptionDate;	// 0x32f006d1
// converted property getter: - (id)exceptionStartTime;	// 0x32f00621
- (BOOL)hasOccurrenceInTheFuture;	// 0x32f023b1
// converted property getter: - (id)isDeleted;	// 0x32f0068d
- (void)loadClientIDs;	// 0x32f02349
// converted property getter: - (id)originalEvent;	// 0x32f005c5
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32f00f51
- (void)postProcessApplicationData;	// 0x32f00dad
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x32f01515
- (id)serverIdForCalFrameworkWithParentEvent:(id)parentEvent;	// 0x32f006e5
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x32f006bd
// converted property setter: - (void)setExceptionStartTime:(id)time;	// 0x32f005e5
// converted property setter: - (void)setIsDeleted:(id)deleted;	// 0x32f00651
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x32f00815
// converted property setter: - (void)setOriginalEvent:(id)event;	// 0x32f005d5
- (void)takeValuesFromParentForAccount:(id)account;	// 0x32f017bd
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)localEvent;	// 0x32f01651
- (BOOL)verifyExternalIds;	// 0x32f01385
@end

