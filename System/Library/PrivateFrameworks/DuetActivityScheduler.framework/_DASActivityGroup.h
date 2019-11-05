/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <DuetActivityScheduler/NSCopying.h>
#import <DuetActivityScheduler/NSSecureCoding.h>

@class NSString;

@interface _DASActivityGroup : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	unsigned long long _maxConcurrent;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long maxConcurrent;              //@synthesize maxConcurrent=_maxConcurrent - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)groupWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)maxConcurrent;
-(id)initWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2 ;
-(void)setMaxConcurrent:(unsigned long long)arg1 ;
@end
