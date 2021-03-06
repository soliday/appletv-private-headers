/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import <NSObject.h> // Unknown library

@class NSTimer, NSMachPort, NSRecursiveLock, PCPersistentTimer, NSString;

@interface PCPersistentInterfaceManager : NSObject {
	NSRecursiveLock *_lock;	// 4 = 0x4
	CFDictionaryRef _delegatesAndRunLoops;	// 8 = 0x8
	CFSetRef _WWANInterfaceAssertionDelegates;	// 12 = 0xc
	NSTimer *_WWANInterfaceAssertionDisableTimer;	// 16 = 0x10
	CFSetRef _WiFiAutoAssociationDelegates;	// 20 = 0x14
	PCPersistentTimer *_WiFiAutoAssociationDisableTimer;	// 24 = 0x18
	CFSetRef _wakeOnWiFiDelegates;	// 28 = 0x1c
	PCPersistentTimer *_wakeOnWiFiDisableTimer;	// 32 = 0x20
	void *_ctServerConnection;	// 36 = 0x24
	NSMachPort *_machPort;	// 40 = 0x28
	void *_interfaceAssertion;	// 44 = 0x2c
	void *_wifiManager;	// 48 = 0x30
	void *_reachability;	// 52 = 0x34
	int _WWANContextIdentifier;	// 56 = 0x38
	NSString *_WWANInterfaceName;	// 60 = 0x3c
	BOOL _isWWANInterfaceUp;	// 64 = 0x40
	BOOL _isWWANInterfaceDataActive;	// 65 = 0x41
	BOOL _isWWANInHomeCountry;	// 66 = 0x42
	BOOL _isPowerStateDetectionSupported;	// 67 = 0x43
	BOOL _isWWANInterfaceInProlongedHighPowerState;	// 68 = 0x44
	BOOL _isWWANInterfaceActivationPermitted;	// 69 = 0x45
	double _lastActivationTime;	// 72 = 0x48
	int _wwanRSSI;	// 80 = 0x50
	BOOL _belowRSSIThreshold;	// 84 = 0x54
	BOOL _isInCall;	// 85 = 0x55
	BOOL _isInternetReachable;	// 86 = 0x56
	BOOL _isInternetReachableViaWiFi;	// 87 = 0x57
	BOOL _isWakeOnWiFiSupported;	// 88 = 0x58
	BOOL _isWakeOnWiFiEnabled;	// 89 = 0x59
}
@property(readonly, assign) NSString *WWANInterfaceName;	// G=0x30257b25; 
@property(readonly, assign) BOOL areAllNetworkInterfacesDisabled;	// G=0x302597cd; 
@property(readonly, assign) BOOL doesWWANInterfaceExist;	// G=0x30257add; 
@property(readonly, assign) BOOL isInCall;	// G=0x30257989; 
@property(readonly, assign) BOOL isInternetReachable;	// G=0x30257945; 
@property(readonly, assign) BOOL isInternetReachableViaWiFi;	// G=0x30257901; 
@property(readonly, assign) BOOL isPowerStateDetectionSupported;	// G=0x30257a99; 
@property(readonly, assign) BOOL isWWANInHomeCountry;	// G=0x302579cd; 
@property(readonly, assign) BOOL isWWANInterfaceActivationPermitted;	// G=0x30257a11; 
@property(readonly, assign) BOOL isWWANInterfaceInProlongedHighPowerState;	// G=0x30257a55; 
@property(readonly, assign) BOOL isWWANInterfaceUp;	// G=0x30257b85; 
@property(readonly, assign) BOOL isWakeOnWiFiSupported;	// G=0x302578bd; 
+ (id)sharedInstance;	// 0x3025a71d
- (id)init;	// 0x3025805d
// declared property getter: - (id)WWANInterfaceName;	// 0x30257b25
- (id)WiFiInterfaceName;	// 0x3025978d
- (void)_adjustWakeOnWiFi;	// 0x30257749
- (void)_adjustWakeOnWiFiLocked;	// 0x3025a209
- (void)_adjustWiFiAutoAssociation;	// 0x3025778d
- (void)_adjustWiFiAutoAssociationLocked;	// 0x3025a129
- (BOOL)_allowBindingToWWAN;	// 0x302576dd
- (void)_createCTConnection;	// 0x302583c1
- (void)_createReachabilityMonitor;	// 0x302589ad
- (void)_createWiFiManager;	// 0x30259f35
- (void)_ctConnectionWasInvalidated;	// 0x30258239
- (void)_mainThreadDelayedInvalidation;	// 0x30257fa1
- (void)_performCalloutsForSelectorValue:(id)selectorValue;	// 0x3025961d
- (void)_populateWakeOnWiFiCapabliity;	// 0x302577d1
- (void)_populateWakeOnWiFiCapabliityLocked;	// 0x3025a015
- (void)_reachabilityCallback:(unsigned)callback;	// 0x30257cd1
- (void)_reachabilityCallbackLocked:(unsigned)locked;	// 0x30257bc9
- (void)_scheduleCalloutsForSelector:(SEL)selector;	// 0x30259419
- (void)_serverCallback:(id)callback info:(id)info;	// 0x30257e25
- (void)_serverCallbackLocked:(id)locked info:(id)info;	// 0x30258ae1
- (void)_updateWWANInterfaceAssertions;	// 0x30257879
- (void)_updateWWANInterfaceAssertionsLocked;	// 0x30259d95
- (void)_updateWWANInterfaceUpStateLocked;	// 0x30257d6d
- (BOOL)_wantsWWANInterfaceAssertion;	// 0x30259d29
- (BOOL)_wantsWakeOnWiFiEnabled;	// 0x30259b99
- (BOOL)_wwanRSSIBelowThresholdAndWoWAvailableLocked;	// 0x302573d5
- (void)addDelegate:(id)delegate callbackRunLoop:(id)loop;	// 0x3025819d
// declared property getter: - (BOOL)areAllNetworkInterfacesDisabled;	// 0x302597cd
- (void)bindCFStream:(CFReadStreamRef)stream toWWANInterface:(BOOL)wwaninterface;	// 0x3025a5fd
- (void)bindCFStreamToWWANInterface:(CFReadStreamRef)wwaninterface;	// 0x302576ad
- (void)bindSocket:(int)socket toWWANInterface:(BOOL)wwaninterface;	// 0x3025a4cd
- (void)bindSocketToWWANInterface:(int)wwaninterface;	// 0x302576c5
- (id)dhcpLeaseExpirationDate;	// 0x3025a2d9
// declared property getter: - (BOOL)doesWWANInterfaceExist;	// 0x30257add
- (void)enableWakeOnWiFi:(BOOL)fi forDelegate:(id)delegate;	// 0x302598d5
- (void)enableWiFiAutoAssociation:(BOOL)association forDelegate:(id)delegate;	// 0x30259bcd
- (void)handleMachMessage:(void *)message;	// 0x30258ad5
// declared property getter: - (BOOL)isInCall;	// 0x30257989
// declared property getter: - (BOOL)isInternetReachable;	// 0x30257945
// declared property getter: - (BOOL)isInternetReachableViaWiFi;	// 0x30257901
// declared property getter: - (BOOL)isPowerStateDetectionSupported;	// 0x30257a99
// declared property getter: - (BOOL)isWWANInHomeCountry;	// 0x302579cd
// declared property getter: - (BOOL)isWWANInterfaceActivationPermitted;	// 0x30257a11
// declared property getter: - (BOOL)isWWANInterfaceInProlongedHighPowerState;	// 0x30257a55
// declared property getter: - (BOOL)isWWANInterfaceUp;	// 0x30257b85
// declared property getter: - (BOOL)isWakeOnWiFiSupported;	// 0x302578bd
- (void)keepWWANInterfaceUp:(BOOL)up forDelegate:(id)delegate;	// 0x30259a31
- (void)removeDelegate:(id)delegate;	// 0x302581f1
- (id)urlConnectionBoundToWWANInterface:(BOOL)wwaninterface withRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x30257449
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x3025740d
@end

