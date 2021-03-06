/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"


@interface BRSubsetProvider : NSObject <BRProvider> {
@private
	id _provider;	// 4 = 0x4
	int _dataLimit;	// 8 = 0x8
}
@property(assign) int dataLimit;	// G=0x32a5d561; S=0x32a5d539; converted property
+ (id)providerWithProvider:(id)provider;	// 0x32a5d1d9
+ (id)providerWithProvider:(id)provider dataLimit:(int)limit;	// 0x32a5d1ed
- (id)initWithProvider:(id)provider dataLimit:(int)limit;	// 0x32a5d04d
- (void)_providerUpdated:(id)updated;	// 0x32a5d571
- (id)controlFactory;	// 0x32a5d23d
- (id)dataAtIndex:(long)index;	// 0x32a5d331
- (long)dataCount;	// 0x32a5d25d
// converted property getter: - (int)dataLimit;	// 0x32a5d561
- (void)dealloc;	// 0x32a5d15d
- (id)hashForDataAtIndex:(long)index;	// 0x32a5d435
// converted property setter: - (void)setDataLimit:(int)limit;	// 0x32a5d539
@end

