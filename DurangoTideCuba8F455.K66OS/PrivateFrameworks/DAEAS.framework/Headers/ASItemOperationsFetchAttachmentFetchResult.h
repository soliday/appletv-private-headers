/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSString;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem {
	NSNumber *_status;	// 40 = 0x28
	NSString *_fileReference;	// 44 = 0x2c
}
@property(retain) NSString *fileReference;	// G=0x34392595; S=0x343925d9; @synthesize=_fileReference
@property(retain) NSNumber *status;	// G=0x3439257d; S=0x343925ad; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x34392535
+ (BOOL)frontingBasicTypes;	// 0x3439245d
+ (BOOL)notifyOfUnknownTokens;	// 0x34392415
+ (BOOL)parsingLeafNode;	// 0x343924ed
+ (BOOL)parsingWithSubItems;	// 0x343924a5
- (id)asParseRules;	// 0x3439227d
// declared property getter: - (id)fileReference;	// 0x34392595
// declared property setter: - (void)setFileReference:(id)reference;	// 0x343925d9
// declared property setter: - (void)setStatus:(id)status;	// 0x343925ad
// declared property getter: - (id)status;	// 0x3439257d
@end

