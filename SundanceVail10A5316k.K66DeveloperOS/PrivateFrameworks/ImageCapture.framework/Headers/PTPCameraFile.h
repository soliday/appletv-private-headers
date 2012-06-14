/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFile.h"

@class NSString;

@interface PTPCameraFile : ICCameraFile {
@private
	void *_ptpCameraFileProperties;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
}
@property(copy) id info;	// G=0x328b8f71; S=0x328b8f85; 
@property(readonly, assign) unsigned long objHandle;	// G=0x328b8f5d; 
@property(retain) NSString *path;	// G=0x328b9d3d; S=0x328b9d51; @synthesize=_path
@property(readonly, assign) unsigned long storageID;	// G=0x328b8f49; 
@property(readonly, assign) unsigned type;	// G=0x328b8f35; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x328b8e19
- (void)dealloc;	// 0x328b8e7d
- (void)finalize;	// 0x328b8ed9
// declared property getter: - (id)info;	// 0x328b8f71
- (id)metadataDict;	// 0x328b94d9
// declared property getter: - (unsigned long)objHandle;	// 0x328b8f5d
// declared property getter: - (id)path;	// 0x328b9d3d
// declared property setter: - (void)setInfo:(id)info;	// 0x328b8f85
// declared property setter: - (void)setPath:(id)path;	// 0x328b9d51
// declared property getter: - (unsigned long)storageID;	// 0x328b8f49
- (id)thumbData;	// 0x328b9141
// declared property getter: - (unsigned)type;	// 0x328b8f35
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x328b8fc9
@end
