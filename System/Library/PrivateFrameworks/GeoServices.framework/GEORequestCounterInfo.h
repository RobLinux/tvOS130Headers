/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface GEORequestCounterInfo : NSObject <NSSecureCoding> {

	NSDictionary* _requestTypeStatistics;
	unsigned long long _bytesTransmitted;
	unsigned long long _bytesReceived;

}

@property (nonatomic,readonly) NSArray * requestTypes; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)_formattedString;
-(unsigned long long)xmitBytes;
-(unsigned long long)recvBytes;
-(unsigned long long)xmitBytesForType:(unsigned char)arg1 ;
-(unsigned long long)recvBytesForType:(unsigned char)arg1 ;
-(unsigned long long)numberOfRequestsForType:(unsigned char)arg1 result:(unsigned char)arg2 ;
-(void)_generateAggregateStatistics;
-(NSArray *)requestTypes;
-(id)nonZeroResultTypesForType:(unsigned char)arg1 ;
@end

