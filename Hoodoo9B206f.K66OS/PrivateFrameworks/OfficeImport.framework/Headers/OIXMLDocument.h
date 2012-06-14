/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIXMLNode.h"
#import "OfficeImport-Structs.h"

@class NSString, OIXMLElement;

__attribute__((visibility("hidden")))
@interface OIXMLDocument : OIXMLNode {
@private
	OIXMLElement *_rootElement;	// 16 = 0x10
	NSString *_version;	// 20 = 0x14
	NSString *_encoding;	// 24 = 0x18
}
@property(retain) OIXMLElement *rootElement;	// G=0x343ffefd; S=0x34439c49; converted property
- (id)initWithRootElement:(id)rootElement;	// 0x34439c01
- (id)XMLString;	// 0x34473c3d
- (id)closingTagString;	// 0x343fff35
- (id)contentString;	// 0x34642fdd
- (id)copyWithZone:(NSZone *)zone;	// 0x34642ffd
- (id)createMutableXMLString;	// 0x34473c65
- (void)dealloc;	// 0x34404d75
- (id)description;	// 0x34642fed
- (id)openingTagString;	// 0x34439f15
// converted property getter: - (id)rootElement;	// 0x343ffefd
- (void)setCharacterEncoding:(id)encoding;	// 0x34439cd1
// converted property setter: - (void)setRootElement:(id)element;	// 0x34439c49
- (void)setVersion:(id)version;	// 0x34439c8d
@end
