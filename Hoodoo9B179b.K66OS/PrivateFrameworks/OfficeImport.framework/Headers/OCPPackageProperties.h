/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OCPPackageProperties : NSObject {
@private
	NSString *mCreator;	// 4 = 0x4
	NSString *mDescription;	// 8 = 0x8
	NSString *mKeywords;	// 12 = 0xc
	NSString *mTitle;	// 16 = 0x10
}
- (id)initWithXml:(xmlDoc *)xml;	// 0x328b95a1
- (id)creator;	// 0x328d3e19
- (void)dealloc;	// 0x328d4a85
- (id)description;	// 0x328d3e39
- (id)keywords;	// 0x328d3e29
- (void)readFromXml:(xmlDoc *)xml;	// 0x328b9695
- (id)title;	// 0x328d3e09
@end

