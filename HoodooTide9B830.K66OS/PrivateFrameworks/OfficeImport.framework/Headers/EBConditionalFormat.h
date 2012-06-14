/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBConditionalFormat : NSObject {
}
+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)xl;	// 0x3133f771
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)xl;	// 0x3133f765
+ (void)convertTokensToSharedTokens:(id)sharedTokens;	// 0x3133f7a5
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)ed;	// 0x311f043d
+ (int)convertXlConditionalFmtTypeEnumToED:(int)ed;	// 0x311f0421
+ (void)readXlConditionalFormat:(XlConditionalFormat *)format toEDConditionalFormatting:(id)edconditionalFormatting state:(id)state;	// 0x311efdf1
+ (bool)validXlCf:(XlCf *)cf;	// 0x3133f709
@end
