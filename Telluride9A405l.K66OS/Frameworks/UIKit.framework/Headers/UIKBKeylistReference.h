/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSString, NSArray;

@interface UIKBKeylistReference : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	id m_value;	// 8 = 0x8
	NSArray *m_nameElements;	// 12 = 0xc
	int m_startKeyIndex;	// 16 = 0x10
	int m_endKeyIndex;	// 20 = 0x14
	unsigned m_flags;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) int endKeyIndex;	// G=0x32f797e9; @synthesize=m_endKeyIndex
@property(readonly, assign, nonatomic) unsigned flags;	// G=0x32f797b9; @synthesize=m_flags
@property(readonly, assign, nonatomic) BOOL isAttributesReference;	// G=0x32f79689; 
@property(readonly, assign, nonatomic) BOOL isGeometryReference;	// G=0x32f79675; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexRangeReference;	// G=0x32f79661; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexReference;	// G=0x32f7964d; 
@property(readonly, assign, nonatomic) BOOL isKeylistReference;	// G=0x32f79611; 
@property(readonly, assign, nonatomic) BOOL isKeysReference;	// G=0x32f79625; 
@property(readonly, assign, nonatomic) BOOL isKeysetReference;	// G=0x32f795fd; 
@property(readonly, assign, nonatomic) BOOL isNamedKeyReference;	// G=0x32f79639; 
@property(readonly, assign, nonatomic) NSString *keyName;	// G=0x32f795b5; 
@property(readonly, assign, nonatomic) NSString *keylistName;	// G=0x32f7956d; 
@property(retain, nonatomic) NSString *name;	// G=0x32f79751; S=0x32f79761; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *nameElements;	// G=0x32f797c9; @synthesize=m_nameElements
@property(readonly, assign, nonatomic) int startKeyIndex;	// G=0x32f797d9; @synthesize=m_startKeyIndex
@property(retain, nonatomic) id value;	// G=0x32f79785; S=0x32f79795; @synthesize=m_value
+ (id)referenceWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x32f78e29
- (id)initWithCoder:(id)coder;	// 0x32f790ed
- (id)initWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x32f78e81
- (id)copyWithZone:(NSZone *)zone;	// 0x32f792f1
- (void)dealloc;	// 0x32f79375
- (id)description;	// 0x32f793e9
- (void)encodeWithCoder:(id)coder;	// 0x32f79201
- (unsigned)endIndexForListCount:(unsigned)listCount;	// 0x32f796c1
// declared property getter: - (int)endKeyIndex;	// 0x32f797e9
// declared property getter: - (unsigned)flags;	// 0x32f797b9
// declared property getter: - (BOOL)isAttributesReference;	// 0x32f79689
// declared property getter: - (BOOL)isGeometryReference;	// 0x32f79675
// declared property getter: - (BOOL)isKeyIndexRangeReference;	// 0x32f79661
// declared property getter: - (BOOL)isKeyIndexReference;	// 0x32f7964d
// declared property getter: - (BOOL)isKeylistReference;	// 0x32f79611
// declared property getter: - (BOOL)isKeysReference;	// 0x32f79625
// declared property getter: - (BOOL)isKeysetReference;	// 0x32f795fd
// declared property getter: - (BOOL)isNamedKeyReference;	// 0x32f79639
// declared property getter: - (id)keyName;	// 0x32f795b5
// declared property getter: - (id)keylistName;	// 0x32f7956d
// declared property getter: - (id)name;	// 0x32f79751
// declared property getter: - (id)nameElements;	// 0x32f797c9
- (void)setFlags:(unsigned)flags setStartKeyIndex:(int)index setEndKeyIndex:(int)index3;	// 0x32f796e1
// declared property setter: - (void)setName:(id)name;	// 0x32f79761
- (void)setNameElements:(id)elements;	// 0x32f79711
// declared property setter: - (void)setValue:(id)value;	// 0x32f79795
- (unsigned)startIndexForListCount:(unsigned)listCount;	// 0x32f796a1
// declared property getter: - (int)startKeyIndex;	// 0x32f797d9
// declared property getter: - (id)value;	// 0x32f79785
@end

