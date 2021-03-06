/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShapeProperties.h"

@class OADConnection;

__attribute__((visibility("hidden")))
@interface OADConnectorProperties : OADShapeProperties {
@private
	OADConnection *mFrom;	// 52 = 0x34
	OADConnection *mTo;	// 56 = 0x38
}
+ (id)defaultProperties;	// 0x3113ffad
- (id)init;	// 0x3113ff1d
- (id)initWithDefaults;	// 0x3113fff5
- (void)dealloc;	// 0x311465e1
- (id)from;	// 0x31140155
- (id)to;	// 0x31140205
@end

