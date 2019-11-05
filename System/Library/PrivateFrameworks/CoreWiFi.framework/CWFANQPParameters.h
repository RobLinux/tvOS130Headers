/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <CoreWiFi/NSCopying.h>
#import <CoreWiFi/NSSecureCoding.h>

@class NSArray;

@interface CWFANQPParameters : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _scanResults;
	NSArray* _ANQPElementIDList;
	unsigned long long _maximumCacheAge;

}

@property (nonatomic,copy) NSArray * scanResults;                             //@synthesize scanResults=_scanResults - In the implementation block
@property (nonatomic,copy) NSArray * ANQPElementIDList;                       //@synthesize ANQPElementIDList=_ANQPElementIDList - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCacheAge;              //@synthesize maximumCacheAge=_maximumCacheAge - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)scanResults;
-(void)setScanResults:(NSArray *)arg1 ;
-(NSArray *)ANQPElementIDList;
-(unsigned long long)maximumCacheAge;
-(BOOL)isEqualToANQPParameters:(id)arg1 ;
-(void)setANQPElementIDList:(NSArray *)arg1 ;
-(void)setMaximumCacheAge:(unsigned long long)arg1 ;
@end

