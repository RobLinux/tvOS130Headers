/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLAppTileDataProviderProtocol.h>

@class NSMutableArray, CLTimer, NSString;

@interface CLAppTileDataProvider : CLIntersiloService <CLAppTileDataProviderProtocol> {

	unique_ptr<CLTilesManager_Type::Client, std::__1::default_delete<CLTilesManager_Type::Client> >* _tilesManagerClient;
	BOOL _fIsRegisteredForTileDownload;
	NSMutableArray* _activeRequests;
	CLTimer* _activeRequestCleanupTimer;

}

@property (assign,nonatomic) BOOL fIsRegisteredForTileDownload;                //@synthesize fIsRegisteredForTileDownload=_fIsRegisteredForTileDownload - In the implementation block
@property (assign,nonatomic) NSMutableArray * activeRequests;                  //@synthesize activeRequests=_activeRequests - In the implementation block
@property (assign,nonatomic) CLTimer * activeRequestCleanupTimer;              //@synthesize activeRequestCleanupTimer=_activeRequestCleanupTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)beginService;
-(void)endService;
-(NSMutableArray *)activeRequests;
-(void)setActiveRequests:(NSMutableArray *)arg1 ;
-(void)fetchAppsForAreaAtLatitude:(double)arg1 longitude:(double)arg2 radius:(float)arg3 includeRegionalApps:(BOOL)arg4 marqueeAppsOnly:(BOOL)arg5 withReply:(/*^block*/id)arg6 ;
-(void)setActiveRequestCleanupTimer:(CLTimer *)arg1 ;
-(CLTimer *)activeRequestCleanupTimer;
-(id)getAppsForAreaAtLatitude:(double)arg1 longitude:(double)arg2 radius:(float)arg3 includeRegionalApps:(BOOL)arg4 marqueeAppsOnly:(BOOL)arg5 ;
-(BOOL)fIsRegisteredForTileDownload;
-(void)setFIsRegisteredForTileDownload:(BOOL)arg1 ;
-(void)onTileWasDownloadedNotification:(int)arg1 data:(NotificationData)arg2 ;
@end

