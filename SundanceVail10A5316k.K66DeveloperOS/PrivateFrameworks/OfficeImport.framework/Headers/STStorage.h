/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "STSStgObject.h"


__attribute__((visibility("hidden")))
@interface STStorage : STSStgObject {
@private
	Storage *m_pCStorage;	// 4 = 0x4
}
- (id)init;	// 0x3126b081
- (id)initWithCStorage:(Storage *)cstorage;	// 0x3126b095
- (void)close;	// 0x3126b119
- (void)dealloc;	// 0x3126b0d9
- (int)getChildType:(id)type;	// 0x3126b58d
- (id)getChildrenInfo;	// 0x3126b42d
- (id)getInfo;	// 0x3126b355
- (id)openStorage:(id)storage withMode:(int)mode;	// 0x3126b245
- (id)openStream:(id)stream withMode:(int)mode;	// 0x3126b135
- (void)setClass:(SsrwOO_GUID)aClass;	// 0x3126b5d5
@end

