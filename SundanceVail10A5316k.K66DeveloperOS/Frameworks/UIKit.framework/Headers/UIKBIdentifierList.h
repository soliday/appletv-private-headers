/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "NSCopying.h"

@class NSArray, NSString, NSMutableArray;

@interface UIKBIdentifierList : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_list;	// 8 = 0x8
	BOOL m_explicitlySpecified;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x303a5f9d; 
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x303a6029; S=0x303a6039; @synthesize=m_explicitlySpecified
@property(readonly, assign, nonatomic) NSArray *list;	// G=0x303a6019; @synthesize=m_list
@property(copy, nonatomic) NSString *name;	// G=0x303a5ff5; S=0x303a6009; @synthesize=m_name
- (id)init;	// 0x303a5b15
- (id)initWithCoder:(id)coder;	// 0x303a5be1
- (void)addIdentifier:(id)identifier;	// 0x303a5fbd
- (id)copyWithZone:(NSZone *)zone;	// 0x303a5d09
// declared property getter: - (unsigned)count;	// 0x303a5f9d
- (void)dealloc;	// 0x303a5b7d
- (id)description;	// 0x303a5db5
- (void)encodeWithCoder:(id)coder;	// 0x303a5c85
// declared property getter: - (BOOL)explicitlySpecified;	// 0x303a6029
// declared property getter: - (id)list;	// 0x303a6019
// declared property getter: - (id)name;	// 0x303a5ff5
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x303a6039
// declared property setter: - (void)setName:(id)name;	// 0x303a6009
@end
