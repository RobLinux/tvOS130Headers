/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/NSNetServiceDelegate.h>
#import <sharingd/SDCompanionStreamDelegate.h>

@class NSString, NSNetService, NSMutableDictionary, NSMutableArray, NSTimer;

@interface SDStreamManager : NSObject <NSNetServiceDelegate, SDCompanionStreamDelegate> {

	NSString* _serviceType;
	NSNetService* _service;
	NSMutableDictionary* _managers;
	NSMutableArray* _companionServices;
	NSMutableArray* _incomingStreams;
	NSMutableDictionary* _continuationStreams;
	long long _connectedStreams;
	NSTimer* _publishTimer;

}

@property (retain) NSNetService * service;                                 //@synthesize service=_service - In the implementation block
@property (retain) NSMutableDictionary * managers;                         //@synthesize managers=_managers - In the implementation block
@property (retain) NSMutableArray * companionServices;                     //@synthesize companionServices=_companionServices - In the implementation block
@property (retain) NSMutableArray * incomingStreams;                       //@synthesize incomingStreams=_incomingStreams - In the implementation block
@property (retain) NSMutableDictionary * continuationStreams;              //@synthesize continuationStreams=_continuationStreams - In the implementation block
@property (assign) long long connectedStreams;                             //@synthesize connectedStreams=_connectedStreams - In the implementation block
@property (retain) NSTimer * publishTimer;                                 //@synthesize publishTimer=_publishTimer - In the implementation block
@property (retain) NSString * serviceType;                                 //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(void)publish;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)unpublish;
-(NSNetService *)service;
-(void)setService:(NSNetService *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)removeService:(id)arg1 ;
-(void)addService:(id)arg1 ;
-(NSMutableDictionary *)managers;
-(id)initWithServiceType:(id)arg1 ;
-(NSMutableArray *)incomingStreams;
-(void)setIncomingStreams:(NSMutableArray *)arg1 ;
-(void)addObservers;
-(void)removeObservers;
-(void)registerManager:(id)arg1 ;
-(void)setManagers:(NSMutableDictionary *)arg1 ;
-(void)debugInfoRequested:(id)arg1 ;
-(void)activityContinuationPayloadSent:(id)arg1 ;
-(BOOL)servicesContainIdentifier:(id)arg1 ;
-(void)publishTimerFired:(id)arg1 ;
-(void)restartPublishTimer;
-(void)continuationStream:(id)arg1 connectedToService:(id)arg2 withFileHandle:(id)arg3 acceptHandler:(/*^block*/id)arg4 ;
-(void)companionStreamClosedStreams:(id)arg1 ;
-(void)registerConnectedStreams;
-(void)getContinuationStreamsForMessage:(id)arg1 bundleID:(id)arg2 usingID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)unregisterConnectedStreams;
-(void)closeStreamsForIdentifier:(id)arg1 ;
-(void)unregisterManager:(id)arg1 ;
-(NSMutableArray *)companionServices;
-(void)setCompanionServices:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)continuationStreams;
-(void)setContinuationStreams:(NSMutableDictionary *)arg1 ;
-(long long)connectedStreams;
-(void)setConnectedStreams:(long long)arg1 ;
-(NSTimer *)publishTimer;
-(void)setPublishTimer:(NSTimer *)arg1 ;
@end

