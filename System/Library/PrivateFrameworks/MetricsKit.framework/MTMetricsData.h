/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@class MTCallerSuppliedFields, NSDictionary, MTPromise, NSMutableDictionary, NSMutableArray;

@interface MTMetricsData : MTObject {

	MTCallerSuppliedFields* _callerSuppliedFields;
	NSDictionary* _baseFields;
	NSDictionary* _eventSpecificFields;
	MTPromise* _configBaseFields;
	NSMutableDictionary* _performanceData;
	NSMutableArray* _postProcessingBlocks;

}

@property (nonatomic,retain) MTCallerSuppliedFields * callerSuppliedFields;              //@synthesize callerSuppliedFields=_callerSuppliedFields - In the implementation block
@property (nonatomic,retain) NSDictionary * baseFields;                                  //@synthesize baseFields=_baseFields - In the implementation block
@property (nonatomic,retain) NSDictionary * eventSpecificFields;                         //@synthesize eventSpecificFields=_eventSpecificFields - In the implementation block
@property (nonatomic,retain) MTPromise * configBaseFields;                               //@synthesize configBaseFields=_configBaseFields - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * performanceData;                      //@synthesize performanceData=_performanceData - In the implementation block
@property (nonatomic,retain) NSMutableArray * postProcessingBlocks;                      //@synthesize postProcessingBlocks=_postProcessingBlocks - In the implementation block
-(id)description;
-(id)toDictionary;
-(id)recordEvent;
-(void)addPostProcessingBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)postProcessingBlocks;
-(NSDictionary *)baseFields;
-(NSDictionary *)eventSpecificFields;
-(MTPromise *)configBaseFields;
-(MTCallerSuppliedFields *)callerSuppliedFields;
-(id)composeFieldsMaps;
-(void)cancelUnfinishedPromisedEventData;
-(NSMutableDictionary *)performanceData;
-(void)setCallerSuppliedFields:(MTCallerSuppliedFields *)arg1 ;
-(void)setBaseFields:(NSDictionary *)arg1 ;
-(void)setEventSpecificFields:(NSDictionary *)arg1 ;
-(void)setConfigBaseFields:(MTPromise *)arg1 ;
-(void)setPerformanceData:(NSMutableDictionary *)arg1 ;
-(void)setPostProcessingBlocks:(NSMutableArray *)arg1 ;
@end

