/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHPSeriesDateTimeFormatting : EDProcessor {
}
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x30d559a1
- (bool)isDateTimeFomrattingInData:(id)data;	// 0x30d55a9d
- (bool)isDateTimeFormattingInContentFormatString:(id)contentFormatString edCell:(EDCellHeader *)cell;	// 0x30d55c15
- (bool)isObjectSupported:(id)supported;	// 0x30d50fbd
@end

