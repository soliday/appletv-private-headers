/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CoreDAVXMLElementAttribute : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_nameSpace;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
}
@property(retain) NSString *name;	// G=0x35de865d; S=0x35de8671; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x35de8695; S=0x35de86a9; @synthesize=_nameSpace
@property(retain) NSString *value;	// G=0x35de86cd; S=0x35de86e1; @synthesize=_value
- (id)init;	// 0x35de846d
- (id)initWithNameSpace:(id)nameSpace name:(id)name value:(id)value;	// 0x35de8471
- (void)dealloc;	// 0x35de8545
- (id)description;	// 0x35de85b9
// declared property getter: - (id)name;	// 0x35de865d
// declared property getter: - (id)nameSpace;	// 0x35de8695
// declared property setter: - (void)setName:(id)name;	// 0x35de8671
// declared property setter: - (void)setNameSpace:(id)space;	// 0x35de86a9
// declared property setter: - (void)setValue:(id)value;	// 0x35de86e1
// declared property getter: - (id)value;	// 0x35de86cd
@end

