/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIURLResolver.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIITunesStoreURLResolver : UIURLResolver {
@private
	NSArray *_converters;	// 4 = 0x4
}
+ (id)urlCacheChangedNotificationName;	// 0x32dc1e39
+ (id)urlCacheName;	// 0x32dc18b5
- (id)initWithDictionary:(id)dictionary;	// 0x32dc18c1
- (id)_newURLConverterWithHostPatterns:(id)hostPatterns hostWhiteList:(id)list pathPatterns:(id)patterns;	// 0x32e9fd55
- (id)convertedURLForURL:(id)url;	// 0x32dc1f31
- (void)dealloc;	// 0x32e9fdcd
@end

