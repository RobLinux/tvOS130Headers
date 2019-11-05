/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEORequestCounterProtocol.h>

@protocol GEORequestCounterProtocol;
@class NSString;

@interface GEORequestCounter : NSObject <GEORequestCounterProtocol> {

	id<GEORequestCounterProtocol> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL countersEnabled; 
+(id)sharedCounter;
+(void)useProxy:(Class)arg1 ;
+(void)useRemoteProxy;
+(void)useLocalProxy;
-(id)init;
-(id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 ;
-(void)readRequestsPerAppSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)readRequestLogsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)startPowerLogSessionWithName:(id)arg1 ;
-(void)clearCounters;
-(void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4 ;
-(void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 ;
-(void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned)arg3 tileDownloadAttempts:(unsigned)arg4 successes:(unsigned)arg5 failures:(unsigned)arg6 bytesDownloaded:(unsigned long long)arg7 ;
-(void)readProactiveTileDownloadsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 at:(id)arg4 ;
-(void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(BOOL)countersEnabled;
-(void)setCountersEnabled:(BOOL)arg1 ;
@end

