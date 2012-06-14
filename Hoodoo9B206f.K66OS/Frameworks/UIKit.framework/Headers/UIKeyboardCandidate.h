/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString;

@interface UIKeyboardCandidate : NSObject <NSCopying> {
@private
	NSString *_alternativeText;	// 4 = 0x4
	NSString *_accessibilityLabel;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *accessibilityLabel;	// G=0x355fe511; @synthesize=_accessibilityLabel
@property(copy, nonatomic) NSString *alternativeText;	// G=0x355fe6ad; S=0x355fe6bd; @synthesize=_alternativeText
@property(readonly, assign, nonatomic) NSString *candidate;	// G=0x355fe4f9; 
@property(readonly, assign, nonatomic) unsigned deleteCount;	// G=0x355fe50d; 
@property(readonly, assign, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;	// G=0x355fe6a9; 
@property(readonly, assign, nonatomic) NSString *input;	// G=0x355fe4fd; 
@property(readonly, assign, nonatomic) NSString *insertion;	// G=0x35469175; 
@property(readonly, assign, nonatomic) BOOL isForShortcutConversion;	// G=0x35469185; 
@property(readonly, assign, nonatomic) unsigned wordOriginFeedbackID;	// G=0x35409925; 
// declared property getter: - (id)accessibilityLabel;	// 0x355fe511
// declared property getter: - (id)alternativeText;	// 0x355fe6ad
// declared property getter: - (id)candidate;	// 0x355fe4f9
- (id)copyWithZone:(NSZone *)zone;	// 0x355fe5b1
- (void)dealloc;	// 0x355fe499
// declared property getter: - (unsigned)deleteCount;	// 0x355fe50d
- (unsigned)hash;	// 0x355fe681
// declared property getter: - (id)input;	// 0x355fe4fd
// declared property getter: - (id)insertion;	// 0x35469175
- (BOOL)isEqual:(id)equal;	// 0x355fe5e5
// declared property getter: - (BOOL)isExtensionCandidate;	// 0x355fe6a9
// declared property getter: - (BOOL)isForShortcutConversion;	// 0x35469185
// declared property setter: - (void)setAlternativeText:(id)text;	// 0x355fe6bd
// declared property getter: - (unsigned)wordOriginFeedbackID;	// 0x35409925
@end
