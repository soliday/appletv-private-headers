/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSArray, NSString, EAAccessoryInternal;
@protocol EAAccessoryDelegate;

@interface EAAccessory : NSObject {
@private
	EAAccessoryInternal *_internal;	// 4 = 0x4
}
@property(assign) CFAccessoryRef cfAccessory;	// G=0x32e64db1; S=0x32e64d91; converted property
@property(assign) /*function-pointer*/ void *cfAccessoryPortPropertyCallback;	// G=0x32e64d71; S=0x32e64d51; converted property
@property(assign) void *cfAccessoryPortPropertyContext;	// G=0x32e64d31; S=0x32e64d11; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x32e65091; 
@property(readonly, assign, nonatomic) unsigned connectionID;	// G=0x32e65071; 
@property(assign, nonatomic) id<EAAccessoryDelegate> delegate;	// G=0x32e64f71; S=0x32e64f91; 
@property(assign) unsigned eqIndex;	// G=0x32e64b81; S=0x32e6548d; converted property
@property(retain) id eqNames;	// G=0x32e64ba1; S=0x32e64bc1; converted property
@property(readonly, assign, nonatomic) NSString *firmwareRevision;	// G=0x32e64fd1; 
@property(readonly, assign, nonatomic) NSString *hardwareRevision;	// G=0x32e64fb1; 
@property(assign) int iPodOutOptionsMask;	// G=0x32e64ab5; S=0x32e64a95; converted property
@property(readonly, assign, nonatomic) NSString *manufacturer;	// G=0x32e65051; 
@property(readonly, assign, nonatomic) NSString *modelNumber;	// G=0x32e65011; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x32e65031; 
@property(readonly, assign, nonatomic) NSArray *protocolStrings;	// G=0x32e6535d; 
@property(readonly, assign, nonatomic) NSString *serialNumber;	// G=0x32e64ff1; 
- (id)init;	// 0x32e650b5
- (id)_initWithAccessory:(id)accessory;	// 0x32e65175
- (id)_protocolIDForProtocolString:(id)protocolString;	// 0x32e64dd1
- (void)_setConnected:(BOOL)connected;	// 0x32e64e05
- (id)_shortDescription;	// 0x32e65149
- (void)_updateAccessoryInfo:(id)info;	// 0x32e64e29
- (BOOL)accessoryHasNMEASentencesAvailable;	// 0x32e654c9
- (id)audioPorts;	// 0x32e64be1
// converted property getter: - (CFAccessoryRef)cfAccessory;	// 0x32e64db1
// converted property getter: - (/*function-pointer*/ void *)cfAccessoryPortPropertyCallback;	// 0x32e64d71
// converted property getter: - (void *)cfAccessoryPortPropertyContext;	// 0x32e64d31
- (int)classType;	// 0x32e64c01
// declared property getter: - (unsigned)connectionID;	// 0x32e65071
- (void)dealloc;	// 0x32e65315
// declared property getter: - (id)delegate;	// 0x32e64f71
- (id)description;	// 0x32e651c5
// converted property getter: - (unsigned)eqIndex;	// 0x32e64b81
// converted property getter: - (id)eqNames;	// 0x32e64ba1
// declared property getter: - (id)firmwareRevision;	// 0x32e64fd1
- (BOOL)getEphemerisExpirationInterval:(double *)interval;	// 0x32e65615
- (BOOL)getEphemerisRecommendRefreshInterval:(double *)interval;	// 0x32e655c1
- (BOOL)getEphemerisURL:(id *)url;	// 0x32e65579
- (BOOL)getNMEASentence:(id *)sentence;	// 0x32e65501
// declared property getter: - (id)hardwareRevision;	// 0x32e64fb1
// converted property getter: - (int)iPodOutOptionsMask;	// 0x32e64ab5
- (id)internalDescription;	// 0x32e64c65
// declared property getter: - (BOOL)isConnected;	// 0x32e65091
// declared property getter: - (id)manufacturer;	// 0x32e65051
// declared property getter: - (id)modelNumber;	// 0x32e65011
// declared property getter: - (id)name;	// 0x32e65031
- (id)preferredApp;	// 0x32e64c21
// declared property getter: - (id)protocolStrings;	// 0x32e6535d
- (BOOL)sendEphemeris:(id)ephemeris;	// 0x32e656f9
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned)week gpsTOW:(double)tow latitude:(double)latitude longitude:(double)longitude accuracy:(unsigned short)accuracy;	// 0x32e656a1
- (BOOL)sendGpsWeek:(unsigned)week gpsTOW:(double)tow;	// 0x32e65669
// declared property getter: - (id)serialNumber;	// 0x32e64ff1
// converted property setter: - (void)setCfAccessory:(CFAccessoryRef)accessory;	// 0x32e64d91
// converted property setter: - (void)setCfAccessoryPortPropertyCallback:(/*function-pointer*/ void *)callback;	// 0x32e64d51
// converted property setter: - (void)setCfAccessoryPortPropertyContext:(void *)context;	// 0x32e64d11
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32e64f91
// converted property setter: - (void)setEqIndex:(unsigned)index;	// 0x32e6548d
// converted property setter: - (void)setEqNames:(id)names;	// 0x32e64bc1
// converted property setter: - (void)setIPodOutOptionsMask:(int)mask;	// 0x32e64a95
- (BOOL)setNMEASentencesToFilter:(id)filter;	// 0x32e65549
- (BOOL)supportsAccessibility;	// 0x32e64afd
- (BOOL)supportsIPodOut;	// 0x32e64ad5
- (BOOL)supportsLocation;	// 0x32e64b25
- (BOOL)supportsPublicIap;	// 0x32e64c41
- (void)updateSystemProperty:(int)property withValue:(id)value;	// 0x32e65725
- (id)valueForLegacyLingoProperty:(id)legacyLingoProperty;	// 0x32e64b4d
@end

