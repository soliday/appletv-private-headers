/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSMutableArray;

@interface UIKBKeylist : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keys;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x305b6929; 
@property(retain, nonatomic) NSMutableArray *keys;	// G=0x30595b29; S=0x3081bdd5; @synthesize=m_keys
@property(retain, nonatomic) NSString *name;	// G=0x305b65c9; S=0x3081bdad; @synthesize=m_name
+ (id)keylist;	// 0x3081ba55
- (id)init;	// 0x3081b9f9
- (id)initWithCoder:(id)coder;	// 0x3081b92d
- (id)initWithName:(id)name keys:(id)keys;	// 0x3066fddd
- (id)copyWithZone:(NSZone *)zone;	// 0x3081bc6d
// declared property getter: - (unsigned)count;	// 0x305b6929
- (void)dealloc;	// 0x3081b99d
- (id)description;	// 0x3081b865
- (void)encodeWithCoder:(id)coder;	// 0x3081b8e1
- (id)keyWithName:(id)name;	// 0x3081bb99
// declared property getter: - (id)keys;	// 0x30595b29
- (id)keysWithInteractionType:(id)interactionType;	// 0x3081ba95
// declared property getter: - (id)name;	// 0x305b65c9
// declared property setter: - (void)setKeys:(id)keys;	// 0x3081bdd5
// declared property setter: - (void)setName:(id)name;	// 0x3081bdad
@end

