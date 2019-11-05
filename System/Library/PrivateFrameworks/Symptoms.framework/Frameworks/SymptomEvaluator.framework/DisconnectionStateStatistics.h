/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/NSSecureCoding.h>

@class NSSet, NSString, NSMutableArray;

@interface DisconnectionStateStatistics : NSObject <NSSecureCoding> {

	NSSet* _daysOfWeek;
	unsigned long long _periodId;
	NSString* _disconnectedFromNetworkId;
	NSString* _connectToNetworkId;
	NSMutableArray* _networkStateRecords;
	unsigned long long _averageDisconnectionLength;

}

@property (readonly) NSSet * daysOfWeek;                                         //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (readonly) unsigned long long periodId;                                //@synthesize periodId=_periodId - In the implementation block
@property (readonly) NSString * disconnectedFromNetworkId;                       //@synthesize disconnectedFromNetworkId=_disconnectedFromNetworkId - In the implementation block
@property (readonly) NSString * connectToNetworkId;                              //@synthesize connectToNetworkId=_connectToNetworkId - In the implementation block
@property (readonly) NSMutableArray * networkStateRecords;                       //@synthesize networkStateRecords=_networkStateRecords - In the implementation block
@property (readonly) unsigned long long averageDisconnectionLength;              //@synthesize averageDisconnectionLength=_averageDisconnectionLength - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)daysOfWeek;
-(unsigned long long)periodId;
-(NSString *)disconnectedFromNetworkId;
-(NSString *)connectToNetworkId;
-(NSMutableArray *)networkStateRecords;
-(unsigned long long)averageDisconnectionLength;
-(id)initWithDaysOfWeek:(id)arg1 periodId:(unsigned long long)arg2 forNetworkStateRecord:(id)arg3 ;
-(BOOL)isMergeableWithDisconnectionStateStatistics:(id)arg1 ;
-(void)mergeDisconnectionStateStatistics:(id)arg1 ;
-(void)calculateAverageLength;
@end

