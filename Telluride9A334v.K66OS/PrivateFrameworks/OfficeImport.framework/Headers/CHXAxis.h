/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHXAxis : NSObject {
}
+ (id)chdAxisFromXmlAxisElement:(xmlNode *)xmlAxisElement state:(id)state;	// 0x356c5645
+ (int)chdAxisPositionFromXmlAxisElement:(xmlNode *)xmlAxisElement;	// 0x356c63c1
+ (int)chdCrossesFromXmlAxisElement:(xmlNode *)xmlAxisElement;	// 0x356c6551
+ (int)chdTickLabelPositionFromXmlTickLabelPositionElement:(xmlNode *)xmlTickLabelPositionElement;	// 0x356c6479
+ (int)chdTickMarkFromXmlTickMarkElement:(xmlNode *)xmlTickMarkElement;	// 0x356e4195
+ (Class)chxAxisClassWithXmlAxisElement:(xmlNode *)xmlAxisElement;	// 0x356c5ed1
+ (void)readScalingFromXmlScalingElement:(xmlNode *)xmlScalingElement axis:(id)axis state:(id)state;	// 0x356c6291
@end

