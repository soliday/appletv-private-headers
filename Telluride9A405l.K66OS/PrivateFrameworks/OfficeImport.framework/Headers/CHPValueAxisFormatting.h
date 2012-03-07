/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHPValueAxisFormatting : EDProcessor {
}
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x30d57771
- (id)dataPointFormattingInData:(id)data;	// 0x30d57b21
- (id)dataPointFormattingInSeriesCollection:(id)seriesCollection;	// 0x30d57a75
- (id)dataPointFormattingInSources:(id)sources;	// 0x30dd95c9
- (bool)isObjectSupported:(id)supported;	// 0x30d52159
- (bool)isPercentageFormattingInContentFormatString:(id)contentFormatString edValue:(EDValue *)value;	// 0x30d57c01
@end
