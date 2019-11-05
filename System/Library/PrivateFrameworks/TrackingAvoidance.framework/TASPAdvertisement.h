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

@class NSData, NSDate, NSString;

@interface TASPAdvertisement : NSObject <OSLogCoding, TAEventProtocol> {

	unsigned char _status;
	NSData* _address;
	NSData* _advertisementData;
	NSData* _reserved;
	long long _rssi;
	NSDate* _scanDate;

}

@property (nonatomic,copy,readonly) NSData * address;                        //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSData * advertisementData;              //@synthesize advertisementData=_advertisementData - In the implementation block
@property (nonatomic,readonly) unsigned char status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSData * reserved;                       //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,readonly) long long rssi;                               //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy,readonly) NSDate * scanDate;                       //@synthesize scanDate=_scanDate - In the implementation block
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
-(NSData *)reserved;
-(NSData *)address;
-(unsigned char)status;
-(unsigned long long)getType;
-(long long)rssi;
-(id)descriptionDictionary;
-(NSData *)advertisementData;
-(NSDate *)scanDate;
-(id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6 ;
-(id)getDate;
@end

