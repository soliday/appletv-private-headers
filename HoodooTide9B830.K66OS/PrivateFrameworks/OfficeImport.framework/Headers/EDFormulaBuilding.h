/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSObject.h"


@protocol EDFormulaBuilding <NSObject>
- (BOOL)addArrayToken:(long)token;
- (char *)addToken:(int)token extendedDataLength:(unsigned)length;
- (char *)addToken:(int)token extendedDataLength:(unsigned)length numArgs:(int)args;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertRefs:(unsigned)refs toTypes:(int *)types;
- (BOOL)convertToIntersect:(unsigned)intersect;
- (BOOL)convertToList:(unsigned)list;
- (BOOL)convertToList:(unsigned)list withFinalParen:(BOOL)finalParen;
- (BOOL)insertExternalName:(unsigned)name withLink:(unsigned)link atIndex:(unsigned)index;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)valid withEDLinks:(id)edlinks;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)vertically withMin:(unsigned short)min andMax:(unsigned short)max;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned)index length:(unsigned)length;
- (void)setWarning:(int)warning;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned)argIndex;
- (int)warningType;
@end
