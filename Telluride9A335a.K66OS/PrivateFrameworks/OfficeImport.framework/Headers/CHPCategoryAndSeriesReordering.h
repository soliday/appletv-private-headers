/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"


__attribute__((visibility("hidden")))
@interface CHPCategoryAndSeriesReordering : EDProcessor {
}
- (void)applyCategoryReorderingPreprocessor:(id)preprocessor;	// 0x3532473d
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x35299591
- (void)applySeriesReorderingPreprocessor:(id)preprocessor;	// 0x3538c9a9
- (bool)isObjectSupported:(id)supported;	// 0x35295b31
- (bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)seriesReorderingPreprocessor isCategoryOrderReversed:(bool)reversed;	// 0x352997ad
- (void)reorderCategoryAndSeries:(id)series sheet:(id)sheet clearAxisReversedFlag:(bool)flag;	// 0x352995b5
- (void)reorderData:(id)data dataPointCount:(unsigned)count byRow:(bool)row;	// 0x353248b9
- (void)reorderDataFormula:(id)formula dataPointCount:(unsigned)count byRow:(bool)row;	// 0x3532499d
- (void)reorderDataValues:(id)values dataPointCount:(unsigned)count;	// 0x35324931
- (void)reorderSeriesCategory:(id)category dataPointCount:(unsigned)count byRow:(bool)row;	// 0x35324831
- (void)reorderValueProperties:(id)properties dataPointCount:(unsigned)count;	// 0x35324bc9
@end
