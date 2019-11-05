/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <TrackingAvoidance/OSLogCoding.h>
#import <TrackingAvoidance/TAEventProtocol.h>

@class NSDate, NSString;

@interface TAVehicleStateNotification : NSObject <OSLogCoding, TAEventProtocol> {

	NSDate* _date;
	unsigned long long _vehicularState;
	unsigned long long _vehicularHints;
	unsigned long long _operatorState;

}

@property (nonatomic,copy,readonly) NSDate * date;                             //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long vehicularState;              //@synthesize vehicularState=_vehicularState - In the implementation block
@property (nonatomic,readonly) unsigned long long vehicularHints;              //@synthesize vehicularHints=_vehicularHints - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorState;               //@synthesize operatorState=_operatorState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)vehicularState;
-(unsigned long long)vehicularHints;
-(id)descriptionDictionary;
-(id)getDate;
-(unsigned long long)operatorState;
-(id)initWithVehicularState:(unsigned long long)arg1 andVehicularHints:(unsigned long long)arg2 andOperatorState:(unsigned long long)arg3 date:(id)arg4 ;
@end

