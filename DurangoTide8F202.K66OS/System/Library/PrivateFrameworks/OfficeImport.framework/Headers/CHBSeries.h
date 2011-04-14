/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHBSeries : NSObject {
}
+ (Class)chdSeriesClassWithState:(id)state;	// 0x31a13451
+ (id)chdSeriesWithState:(id)state;	// 0x31a13501
+ (id)getCHDSeriesFromSeriesID:(int)seriesID state:(id)state;	// 0x31ae2ead
+ (id)readFrom:(XlChartDataSeries *)from state:(id)state;	// 0x31a130cd
+ (void)readXlChartSeriesFormat:(XlChartDataSeries *)format chdSeries:(id)series state:(id)state;	// 0x31a143e5
+ (void)resolveSeriesStyle:(id)style state:(id)state;	// 0x31a14715
@end
