/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHChart : NSObject {
}
+ (CFStringRef)createChartImageUrlString:(id)string state:(id)state;	// 0x34007049
+ (id)geometry:(id)geometry;	// 0x34006cf9
+ (int)handleFloatingChart:(id)chart state:(id)state;	// 0x34006d31
+ (int)handleInlineChart:(id)chart state:(id)state;	// 0x34006d0d
+ (int)handleInlineChart:(id)chart state:(id)state imageUrl:(CFStringRef)url;	// 0x34006eb1
+ (char *)pdfId:(id)anId;	// 0x34006ce5
+ (CFDataRef)renderChart:(id)chart;	// 0x34007041
@end
