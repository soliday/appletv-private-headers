/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSMutableArray;

@interface ASMeetingResponseResponse : ASItem {
	NSMutableArray *_singularResponses;	// 40 = 0x28
}
@property(readonly, retain) NSArray *singularResponses;	// G=0x32ed45ad; @synthesize=_singularResponses
+ (BOOL)acceptsTopLevelLeaves;	// 0x32ed4065
+ (BOOL)frontingBasicTypes;	// 0x32ed3f8d
+ (BOOL)notifyOfUnknownTokens;	// 0x32ed3f45
+ (BOOL)parsingLeafNode;	// 0x32ed401d
+ (BOOL)parsingWithSubItems;	// 0x32ed3fd5
- (id)init;	// 0x32ed445d
- (void)_addSingularResponse:(id)response;	// 0x32ed3f25
- (id)asParseRules;	// 0x32ed3e55
- (void)dealloc;	// 0x32ed43a9
- (id)description;	// 0x32ed43f1
// declared property getter: - (id)singularResponses;	// 0x32ed45ad
@end

