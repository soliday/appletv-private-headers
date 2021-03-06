/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMTileStore : NSObject {
	TileStore *_tileStore;	// 4 = 0x4
}
@property(assign, nonatomic) int tileEdition;	// G=0x31fc0285; S=0x31fc0299; @dynamic
- (id)initWithPath:(id)path;	// 0x31fc019d
- (void)beginWrites;	// 0x31fc02c9
- (void)endWrites;	// 0x31fc02dd
- (void)evict;	// 0x31fc033d
- (BOOL)hasDataForTilePath:(const XXStruct_j8inqB *)tilePath;	// 0x31fc0305
- (void)insertData:(const char *)data length:(unsigned long)length forTilePath:(const XXStruct_j8inqB *)tilePath;	// 0x31fc02f1
- (void)openDatabase:(BOOL)database;	// 0x31fc02ad
- (BOOL)selectData:(char **)data length:(unsigned *)length forTilePath:(const XXStruct_j8inqB *)tilePath;	// 0x31fc0321
// declared property setter: - (void)setTileEdition:(int)edition;	// 0x31fc0299
// declared property getter: - (int)tileEdition;	// 0x31fc0285
@end

