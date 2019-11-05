/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAReceiver.h>
#import <useractivityd/SFActivityScannerDelegate.h>

@class NSMutableSet, NSString, UADispatchScheduler, SFPeerDevice, NSTimer, NSSet;

@interface UASharingReceiver : UAReceiver <SFActivityScannerDelegate> {

	NSMutableSet* _sfActivityScanners;
	NSMutableSet* _receivedItems;
	NSMutableSet* _activeDevices;
	NSString* _lastAutoPullActivitiesRequesterId;
	NSMutableSet* _recentlyLostDeviceIDs;
	BOOL _forceScanning;
	UADispatchScheduler* _periodicCleanup;
	SFPeerDevice* _lastSeenPasteboardDevice;
	long long _lastSeenPasteboardVersionBit;
	NSTimer* _remotePboardTimer;

}

@property (retain,readonly) NSSet * activeDevices; 
@property (retain,readonly) UADispatchScheduler * periodicCleanup;              //@synthesize periodicCleanup=_periodicCleanup - In the implementation block
@property (assign) BOOL forceScanning;                                          //@synthesize forceScanning=_forceScanning - In the implementation block
@property (retain) SFPeerDevice * lastSeenPasteboardDevice;                     //@synthesize lastSeenPasteboardDevice=_lastSeenPasteboardDevice - In the implementation block
@property (assign) long long lastSeenPasteboardVersionBit;                      //@synthesize lastSeenPasteboardVersionBit=_lastSeenPasteboardVersionBit - In the implementation block
@property (retain) NSTimer * remotePboardTimer;                                 //@synthesize remotePboardTimer=_remotePboardTimer - In the implementation block
@property (copy,readonly) NSSet * sfActivityScanners; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)resume;
-(BOOL)suspend;
-(BOOL)removeItem:(id)arg1 ;
-(BOOL)terminate;
-(id)initWithManager:(id)arg1 ;
-(id)statusString;
-(BOOL)active;
-(NSSet *)activeDevices;
-(void)activityScanner:(id)arg1 receivedAdvertisement:(id)arg2 ;
-(void)activityScanner:(id)arg1 foundDeviceWithDevice:(id)arg2 ;
-(void)activityScanner:(id)arg1 lostDeviceWithDevice:(id)arg2 ;
-(BOOL)fetchMoreAppSuggestions;
-(id)receivedItems;
-(BOOL)receiving;
-(BOOL)addSFActivityScanner:(id)arg1 ;
-(void)setScanningForTypes:(id)arg1 ;
-(BOOL)removeSFActivityScanner:(id)arg1 ;
-(void)lostDeviceWithUUID:(id)arg1 ;
-(void)periodicCleanupFunc;
-(NSSet *)sfActivityScanners;
-(UADispatchScheduler *)periodicCleanup;
-(void)foundDevice:(id)arg1 ;
-(void)lostDevice:(id)arg1 ;
-(void)removeAllFromDevice:(id)arg1 ;
-(SFPeerDevice *)lastSeenPasteboardDevice;
-(void)setLastSeenPasteboardDevice:(SFPeerDevice *)arg1 ;
-(NSTimer *)remotePboardTimer;
-(void)setRemotePboardTimer:(NSTimer *)arg1 ;
-(BOOL)_addItem:(id)arg1 scheduleUpdates:(BOOL)arg2 ;
-(void)receiveAdvertisement:(id)arg1 scanner:(id)arg2 ;
-(long long)lastSeenPasteboardVersionBit;
-(void)setLastSeenPasteboardVersionBit:(long long)arg1 ;
-(void)clearRemotePasteboardAvalible:(id)arg1 ;
-(id)sharingBTLESuggestedItemForAdvertisementPayload:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)addItem:(id)arg1 scheduleUpdates:(BOOL)arg2 ;
-(void)fetchMoreAppSuggestionsFromDevice:(id)arg1 ;
-(id)sfActivityScanner;
-(void)addNewItemsFromPayloads:(id)arg1 device:(id)arg2 scanner:(id)arg3 force:(BOOL)arg4 ;
-(BOOL)forceScanning;
-(void)setForceScanning:(BOOL)arg1 ;
@end

