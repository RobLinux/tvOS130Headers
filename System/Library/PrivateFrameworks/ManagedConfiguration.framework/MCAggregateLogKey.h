/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCAggregateLogKey : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long value; 
+(id)keys;
+(unsigned long long)bucket;
+(id)bucketSpecificKeys:(unsigned long long)arg1 ;
+(id)keysForAllBuckets;
+(id)debugKeys;
-(NSString *)name;
-(unsigned long long)value;
@end
