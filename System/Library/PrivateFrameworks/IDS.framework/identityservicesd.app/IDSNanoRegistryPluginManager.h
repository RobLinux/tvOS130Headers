/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, IDSPluginNanoRegistryProtocol;
@class NSObject, NSMutableArray;

@interface IDSNanoRegistryPluginManager : NSObject {

	BOOL _pluginImplementsWatchDidStartAdvertising;
	BOOL _pluginImplementsWatchDidStopAdvertising;
	BOOL _isAdvertising;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableArray* _peripheralManagers;
	id<IDSPluginNanoRegistryProtocol> _plugin;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                 //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL pluginImplementsWatchDidStartAdvertising;              //@synthesize pluginImplementsWatchDidStartAdvertising=_pluginImplementsWatchDidStartAdvertising - In the implementation block
@property (assign,nonatomic) BOOL pluginImplementsWatchDidStopAdvertising;               //@synthesize pluginImplementsWatchDidStopAdvertising=_pluginImplementsWatchDidStopAdvertising - In the implementation block
@property (nonatomic,retain) NSMutableArray * peripheralManagers;                        //@synthesize peripheralManagers=_peripheralManagers - In the implementation block
@property (nonatomic,retain) id<IDSPluginNanoRegistryProtocol> plugin;                   //@synthesize plugin=_plugin - In the implementation block
@property (assign,nonatomic) BOOL isAdvertising;                                         //@synthesize isAdvertising=_isAdvertising - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setPlugin:(id<IDSPluginNanoRegistryProtocol>)arg1 ;
-(id<IDSPluginNanoRegistryProtocol>)plugin;
-(void)setIsAdvertising:(BOOL)arg1 ;
-(BOOL)isAdvertising;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_initializePlugin;
-(BOOL)pluginImplementsWatchDidStartAdvertising;
-(BOOL)pluginImplementsWatchDidStopAdvertising;
-(void)_initializePluginWithClass:(Class)arg1 ;
-(void)notifyWatchDidStartAdvertisingWithPeripheralManager:(id)arg1 ;
-(void)notifyWatchToStartAdvertising;
-(void)notifyWatchDidStopAdvertisingWithPeripheralManager:(id)arg1 ;
-(void)notifyWatchToStopAdvertising;
-(void)initializePluginWithClass:(Class)arg1 ;
-(void)executeSynchronouslyOnCallbackQueue:(/*^block*/id)arg1 ;
-(void)setPluginImplementsWatchDidStartAdvertising:(BOOL)arg1 ;
-(void)setPluginImplementsWatchDidStopAdvertising:(BOOL)arg1 ;
-(NSMutableArray *)peripheralManagers;
-(void)setPeripheralManagers:(NSMutableArray *)arg1 ;
@end

