/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, WAMessage, PBCodable;

@interface WANWActivityStatistics : NSObject {

	unsigned _awdMetricID;
	NSArray* _activityUUIDs;
	NSArray* _externallyVisibleActivityUUIDs;
	WAMessage* _message;
	PBCodable* _awdReport;

}

@property (nonatomic,retain) WAMessage * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) PBCodable * awdReport;                       //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                        //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (retain) NSArray * activityUUIDs;                               //@synthesize activityUUIDs=_activityUUIDs - In the implementation block
@property (retain) NSArray * externallyVisibleActivityUUIDs;              //@synthesize externallyVisibleActivityUUIDs=_externallyVisibleActivityUUIDs - In the implementation block
-(unsigned)awdMetricID;
-(PBCodable *)awdReport;
-(WAMessage *)message;
-(void)setMessage:(WAMessage *)arg1 ;
-(void)setExternallyVisibleActivityUUIDs:(NSArray *)arg1 ;
-(void)setActivityUUIDs:(NSArray *)arg1 ;
-(NSArray *)activityUUIDs;
-(id)initWithWAActivityReport:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(NSArray *)externallyVisibleActivityUUIDs;
@end

